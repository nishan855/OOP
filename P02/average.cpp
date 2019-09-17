include "average.h"
using namespace std;

friend Average::ostream& operator <<(ostream &os, Average &avg )
{
//undefined check
if(avg._value == 0)
os<<"Undefined.";
// average
else
os<<avg._sum / avg._value;

return os;
}

friend Average::istream& operator>>(istream &in, Average &avg)
{
double num;
// user input
cout<<"\n Enter a double value: ";
cin>>num;


avg._sum += num;

avg._value++;

return in;
}

Average & operator +=(int num);
{

_sum += num;

_value++;

return *this;
}