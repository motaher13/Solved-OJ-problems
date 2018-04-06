#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <map>
using namespace std;
int main()
{
    char str[100000],str2[100000];
    int i,j,k,l,count,count2,mi,ck;

     while(scanf("%d",&k)){
            if(k==-1)break;
    map<char,int>name;
    scanf("%s%s",str,str2);
    printf("Round %d\n",k);
    mi=1;
    count=0,count2=0;
    for(i=0;str2[i];i++){

     if(name.find(str2[i])!=name.end())name[str2[i]]=-1;
     else name[str2[i]]=1;
     if(name[str2[i]]==1){

      ck=0;
    for(j=0;str[j];j++){
    if(str[j]==str2[i]){
    str[j]='-1';
    ck=1;
    count++;
    }
    }
    if(ck==0)count2++;
    if(count==strlen(str)){
    mi=2;
    break;
    }
    else if(count2==7){
    mi=3;
    break;
    }
    }
    }
    if(mi==3)printf("You lose.");
    if(mi==2)printf("You win.");
    if(mi==1)printf("You chickened out.");
    printf("\n");
    }
    return 0;
}
