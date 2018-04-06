#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    for(int i=65;i<=90;i++){
        char ch=i;
        string str;
         str=str+ch;
        q.push(str);
    }
    int cou=0;
   while(!q.empty()){
    string str=q.front();

 //   cout<<str<<endl;
 cou++;
 if(str=="VWXYZ")cout<<cou<<endl;
 int l=str[str.size()-1];

    q.pop();
    for(int i=l+1;i<=5;i++){
        char ch=i;
        string str2=str+ch;
        if(str2.size()<=8)q.push(str2);

    }


   }
    cout<<cou<<endl;
}

