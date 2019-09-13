#include <string>
using namespace std;


class Line {
 

private:
   double _x1;
   double _x2;
   double _y1;
   double _y2;

public:
 Line( double x1, double y1, double x2, double y2) {
	 _x1 = x1;
	 _x2 = x2;
	 _y1 = y1;
	 _y2 = y2;
	
	}
     

string to_string();

double length();

};
