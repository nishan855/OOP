#include "line.h"
#include <cmath>
#include <sstream>

double Line:: length () {

double Xvalue = (_x1 - _x2);
double Yvalue = (_y1 - _y2);
double distance = sqrt(Xvalue * Xvalue + Yvalue * Yvalue);

return distance ;

}

string Line:: to_string (){

ostringstream str1;
ostringstream str2;
ostringstream str3;
ostringstream str4;

str1 << _x1;
str2 << _x2;
str3 << _y1;
str4 << _y2;


string stringx1 = str1.str();
string stringx2 = str2.str();
string stringy1 = str3.str();
string stringy2 = str4.str();

string result = "("+ stringx1 + "," + stringy1 + ")" + " - " + "("+ stringx2 + "," + stringy2 + ")" ;

return result;


}
