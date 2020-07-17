#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    double a;
    cin>>a;
    stringstream sso;
    sso<<a;
    string stringinput;
    sso>>stringinput;
    cout<<"the integer value"<<a<<endl;
    cout<<stringinput;




}
