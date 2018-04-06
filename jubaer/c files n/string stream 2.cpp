#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;
int main()
{
    int i;
    char  a[12];
    gets(a);
    stringstream os;
    os<<a;
//stringstream<::string>::iterator r;
    double b[21];
    for(i=0;i<7;i++){
            if(type(os)==int)
    os>>b[i];
    cout<<b[i]<<" ";
    }

}
/*stringstream os;

stringstream os;
os << "12345 67.89"; // insert a string of numbers into the stream
int nValue;
double dValue;

os >> nValue >> dValue;

cout << nValue << " " << dValue << endl;
}*/
