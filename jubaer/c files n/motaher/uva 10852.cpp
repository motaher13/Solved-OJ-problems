#include<iostream>
#include <stdio.h>
using namespace std;

char  str[10000];
int  ara[30000];

int main()
{
    int i,j,k,l,li=10000,o,p;
    for(i=2;i<=li;i++){
    str[i]='1';
    }
    k=1;
    for(i=2;i<=li;i++){
    if(str[i]=='1'){
    ara[k]=i;
    k++;
    }
    for(j=2;j*i<=li;j++){
    str[j*i]='0';
    }
    }
    cin>>p;
    while(p--){
   cin>>k;
   j=0;
   for(i=1;ara[i]<=k;i++){
        if(ara[i]>=k/2){
   for(l=1;(l*ara[i])<=k;l++){
   if((l+1)*ara[i]>k&&(k-(ara[i]*l)>j)){
        j=k-(ara[i]*l);
        o=ara[i];

   }

   }
   }
   }
  cout<<o<<endl;
    }

    return 0;
}
