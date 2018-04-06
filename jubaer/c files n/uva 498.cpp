#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;
long long ara[100000],ara2[100000];
 char str[1000000],str2[100000];
int main()
{
long long i,j,l,m,n,p,q,r,s,ck,fla,cou,u,mid,mi,flag,sum,k;
     while(gets(str)){
     k=0;
    l=0;
    mi=0;
    flag=0;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
        if(str[i]=='-')mi=1;
        else k=k*10+(int)str[i]-48;
        flag=1;
        }
        if((str[i]==' '||str[i+1]=='\0')&&flag==1){
            if(mi==1)ara[l]=-k;
            else ara[l]=k;
            l++;
            mi=0;
            k=0;
            flag=0;
        }
    }
       gets(str2);
     k=0;
    r=0;
    mi=0;
    flag=0;
    for(i=0;str2[i];i++){
        if(str2[i]!=' '){
        if(str2[i]=='-')mi=1;
        else k=k*10+(int)str2[i]-48;
        flag=1;
        }
        if((str2[i]==' '||str2[i+1]=='\0')&&flag==1){
            if(mi==1)ara2[r]=-k;
            else ara2[r]=k;
            r++;
            mi=0;
            k=0;
            flag=0;
        }
    }
    for(i=0;i<r;i++){
            sum=0;
        p=ara2[i];
        for(k=l-1,j=0;j<l;j++,k--){
                s=1;
                for(n=0;n<k;n++){
                    s=s*p;
                }
            sum=sum+(ara[j]*s);
        }
        printf("%lld",sum);
        if(i<r-1)printf(" ");
    }
    printf("\n");
     }
     return 0;
}
