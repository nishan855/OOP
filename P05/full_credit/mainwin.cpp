#include "mainwin.h"

Mainwin::Mainwin() : Mainwin{*(new Store)} { }
Mainwin::Mainwin(Store& store) : _store{&store} {

    // /////////////////
    // G U I   S E T U P
    // /////////////////
 set_default_size(400, 200);
    set_title("Sweets")

    // Set up a vertical box to hold the main window elements
Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);



    // ///////
    // M E N U
    // Add and configure a menu bar as the top item in the vertical box
Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);
 

    // /////////////
    // T O O L B A R
    // Add a toolbar to the vertical box just below the menu (bonus level)
Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar);

  //Addig new sweet and price
Gtk::ToolButton *new_sweet_button = Gtk::manage(new Gtk::ToolButton(Gtk::Stock::NEW));
    new_sweet_button->set_tooltip_markup("Create a new name of sweet, discarding any in progress");
    new_sweet_button->signal_clicked().connect([this] {this->on_new_sweet_click();});
    toolbar->append(*new_sweet_button);



    // ///////////////////////
    // D A T A   D I S P L A Y
    // Provide a text entry box to show the sweets and orders



    // ///////////////////////////////////    
    // S T A T U S   B A R   D I S P L A Y
    // Provide a status bar for transient messages


    // Make the vertical box and everything in it visible

}

Mainwin::~Mainwin() { }

// /////////////////
// C A L L B A C K S
// /////////////////



// /////////////////
// U T I L I T I E S
// /////////////////


