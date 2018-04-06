#include <iostream>
#include <ctype.h>

#include <math.h>
using namespace std;
int main()
{
double x = 5.000;
int y = 5;
if( fabs(x-(double)y) < 0.01 ) // If the difference between x and y is less than 0.01...
// 0.01 is the value you want to use as a "Rounding Error"
{
     //They are almost equal
}
else
{
     //hey aren't equal at all
}



}
