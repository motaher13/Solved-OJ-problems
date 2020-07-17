#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int i=1;
   stack<string>name;
   string n;
   while(i<=5){
   cin>>n;
   name.push(n);
i++;
   }
cout<<name.back()<<endl;
cout<<name.size()<<endl<<endl;
while(!name.empty()){

   cout<<name.top()<<endl;
   name.pop();

}

}
