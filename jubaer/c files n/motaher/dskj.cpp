#include <iostream>
#include <map>
using namespace std;

int main()
{
map<string,string>numbers;
numbers["sharif"]="365";
numbers["sdjk"]="123";
cout<<"sharif: "<<numbers["sharif"]<<endl<<"number of numbe "<<numbers.size()<<endl;
numbers.erase("sdjk");
cout<<"sharif: "<<numbers["sharif"]<<endl<<"number of numbe "<<numbers.size()<<endl;

}
