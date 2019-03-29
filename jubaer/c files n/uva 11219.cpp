#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char str[1000],str2[1000];
    int ara[1000],ara2[1000], i,j,k,l,ck,r=1;
    cin>>l;
    while(l--){
    scanf("%s%s",str,str2);
    printf("Case #%d: ",r);
    r++;
    k=0;
    j=0;
    ck=0;
    for(i=0;str[i];i++){
    if(str[i]!='/')ck=1;
    if(ck==1){
    k=k*10+(int)str[i]-48;
    if(str[i+1]=='/'||str[i+1]=='\0'){
    ck=0;
    ara[j]=k;
    k=0;
    j++;
    }
    }
    }
   k=0;
    j=0;
    ck=0;
    for(i=0;str2[i];i++){
    if(str2[i]!='/')ck=1;
    if(ck==1){
    k=k*10+(int)str2[i]-48;
    if(str2[i+1]=='/'||str2[i+1]=='\0'){
    ck=0;
    ara2[j]=k;
    k=0;
    j++;
    }
    }
    }
    if(ara[0]<ara2[0])ara[1]=ara[1]-1;
     if(ara[1]<ara2[1])ara[2]=ara[2]-1;
     if(ara[2]<ara2[2])printf("Invalid birth date");
     else if(ara[2]==ara2[2])printf("0");
     else if(ara[2]-ara2[2]>130)printf("Check birth date");
     else printf("%d",ara[2]-ara2[2]);
     printf("\n");
    }
    return 0;
}
