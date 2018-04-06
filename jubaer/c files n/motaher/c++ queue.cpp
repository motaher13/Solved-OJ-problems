#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    int i=1;
   queue<string>name;
   string n;
   while(i<=5){
   cin>>n;
   name.push(n);
i++;
   }
cout<<name.back()<<endl;
cout<<name.size()<<endl<<endl;
while(!name.empty()){

   cout<<name.front()<<endl;
   name.pop();

}

}
