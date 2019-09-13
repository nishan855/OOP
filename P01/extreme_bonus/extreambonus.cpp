#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){

char* x = getenv("USER");
cout << "Hello " << x << endl;
return 0;


}
