#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
map<std::string,int>name;
map<std::string,int>::iterator iterator;
 name["azia"]=8;
name["araf"]=34;
name["anas"]=67;

for(iterator=name.begin();iterator!=name.end();iterator++)
cout<<iterator->first<<" "<<iterator->second<<endl;





}
