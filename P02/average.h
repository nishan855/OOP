class Average{
private: double _sum;
private: int _values;

//constructor
public:
Average()
{
_sum=0;
_values=0;
}
friend ostream& operator <<(ostream &os, Average &av);
friend istream& operator >>(istream &in, Average &av);
Average & operator +=(int num);
}