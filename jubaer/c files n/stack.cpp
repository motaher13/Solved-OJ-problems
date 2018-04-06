#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
int i,k,j,l,m,n;
   stack<int>name;
   stack<int>name1;
   cout<<name.size();

   for(i=0;i<5;i++){
   scanf("%d",&k);
   name.push(k);

   }

   cout<<name.top()<<endl<<name.size()<<endl;
   for(;!name.empty();){

        name1.push(name.top());
   name.pop();
   }
  // cout<<name.top()<<endl<<name.size()<<endl;
cout<<name1.top()<<endl<<name1.size()<<endl;

for(i=0;i<5;i++){
   scanf("%d",&k);
   name1.push(k);

   }

cout<<name1.top()<<endl<<name1.size()<<endl;

}
