#include <iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
char str[5000000],ch;
int main()
{
    int i,j,k,ck;
    for(k=0;;k++){
            i=0;
    while(1)
    {
        ch=getchar();
        if(ch=='\n')break;
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
        str[i]=ch;
        i++;
        }
    }
    str[i]='\0';
    if(strcmp(str,"DONE")==0)break;
for(i=strlen(str)-1,j=0;i>=0;i--,j++){
        ck=1;
  if(str[i]==str[j])ck=0;
  else if(str[i]==str[j]+32)ck=0;
  else if(str[i]==str[j]-32)ck=0;
        if(ck==1)break;

}
if(i==-1)cout<<"You won't be eaten!";
    else cout<<"Uh oh..";
    cout<<endl;
    }
    return 0;
}
