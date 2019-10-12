#include "mainwin.h"
#include <cmath>

// Compare this main window version with the dialog version in mainwin-dialog.cpp

Mainwin::Mainwin() 

    // This is the Mainwin's initialization list, which
    //   specifies construction of all of the widgets
  : button{Gtk::manage(new Gtk::Button{"Click this button!"})},
    entry{Gtk::manage(new Gtk::Entry{})},
    comboboxtext{Gtk::manage(new Gtk::ComboBoxText{true})},
    togglebutton{Gtk::manage(new Gtk::ToggleButton{"Toggle Button"})},
    checkbutton{Gtk::manage(new Gtk::CheckButton{"Check Button (enables Scale)"})},
    frame{Gtk::manage(new Gtk::Frame{"This Frame visually groups the RadioButtons"})},
    radiobutton1{Gtk::manage(new Gtk::RadioButton{"Radio Button 1"})},
    radiobutton2{Gtk::manage(new Gtk::RadioButton{"Radio Button 2"})},
    spinbutton{Gtk::manage(new Gtk::SpinButton)},
    label{Gtk::manage(new Gtk::Label{"This Label is the square of SpinButton (above) or Scale (below)"})},
    scale{Gtk::manage(new Gtk::Scale)},
    progressbar{Gtk::manage(new Gtk::ProgressBar)},
    dialog_button{Gtk::manage(new Gtk::Button{"As a dialog..."})}

    // This is the constructor body, which configures and packs each widget
    //     into a VBox that has been added to the main window
{
    set_title("Nishan Thapa 5");
    Gtk::VBox *vbox = Gtk::manage(new Gtk::VBox);
    add(*vbox); // to Mainwin




    // https://developer.gnome.org/gtkmm/stable/classGtk_1_1SpinButton.html
    // https://developer.gnome.org/gtkmm-tutorial/stable/sec-spinbutton.html.en
    vbox->pack_start(*spinbutton);
    spinbutton->set_range(0.0, 100.0);
    spinbutton->set_increments(1.0, 1.0);
    spinbutton->signal_value_changed().connect([this] {this->on_spinbutton_value_changed();});



    vbox->show_all();
}

Mainwin::~Mainwin() { }

// /////////
// Callbacks
// /////////

void Mainwin::on_button_click() {
    Gtk::MessageDialog{*this, "Ouch!"}.run();
}

void Mainwin::on_entry_activate() {
    Gtk::MessageDialog{*this, entry->get_text()}.run();
}

void Mainwin::on_comboboxtext_activate() {
    std::string s = "Row " + std::to_string(comboboxtext->get_active_row_number())
        + ": " + comboboxtext->get_active_text();
    Gtk::MessageDialog{*this, s}.run();
}

void Mainwin::on_togglebutton_click() {
    Gtk::MessageDialog{*this, togglebutton->get_active() ? "Down" : "Up"}.run();
}

void Mainwin::on_checkbutton_click() {
    scale->set_sensitive(checkbutton->get_active()); // Checkbox controls scale's sensitivity
    Gtk::MessageDialog{*this, checkbutton->get_active() ? "Checked" : "Unchecked"}.run();
}

void Mainwin::on_radiobutton_click(int button) {
    Gtk::MessageDialog{*this, "Radio Button " + std::to_string(button)}.run();
}

//SPIN//////////
void Mainwin::on_spinbutton_value_changed() {
    int sp = spinbutton->get_value();
    label->set_text(std::to_string(sp*sp));
    Gtk::MessageDialog{*this, "Square root  " + std::to_string(sqrt(sp))+ "   " + "natural logarithm  " + std::to_string(log(sp))+ "   " + "Cosine  " + std::to_string(cos(sp))}.run();
}
//////////
void Mainwin::on_scale_value_changed() {
    int sp = scale->get_value();
    label->set_text(std::to_string(sp*sp));
    progressbar->set_fraction(sqrt(scale->get_value())/10.0);
}


