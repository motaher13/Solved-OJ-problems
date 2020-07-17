#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
 char str[1500000],str2[1500000];
 long long ara[1000000],ara2[1000000];
int main()
{

    int i,j,k,l,m,n,p,q,r,s,ck,fla,cou,u,mid,mi,flag;
    char ch;
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
    if(l==r){
            cou=0;
        for(i=0;i<l;i++){
         for(j=0;j<r;j++){
                if(ara[i]==ara2[j]){

                    cou++;
                ara2[j]=216789566;
                ara[i]=216789566;
                break;
                }
        }
        }

        if(cou==l)printf("A equals B");
        else if(cou==0)printf("A and B are disjoint");
        else if(cou<l)printf("I'm confused! ");
    }

    if(l>r){
          cou=0;
        for(i=0;i<r;i++){
      for(j=0;j<l;j++){
                if(ara[j]==ara2[i]){
                    cou++;
                    ara2[i]=21678956669;
                    ara[j]=21678956669;
                    break;
                }
        }

        }
        if(cou==r)printf("B is a proper subset of A");
        else if(cou==0)printf("A and B are disjoint");
        else if(cou<r)printf("I'm confused!");

    }
      if(l<r){
          cou=0;
        for(i=0;i<l;i++){
     for(j=0;j<r;j++){
                if(ara[i]==ara2[j]){
                    cou++;
                    ara2[j]=21678956669;
                   ara[i]= 21678956669;
                   break;
                }
        }
        }
        if(cou==l)printf("A is a proper subset of B");
        else if(cou==0)printf("A and B are disjoint");
        else if(cou<l)printf("I'm confused!");

    }
     printf("\n");

}
  return 0;
}
