#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stck[500];
int main()
{
    int test,i,j,k,flag;
    char kase[10],input[1000];
    //freopen("in673.txt","r",stdin);
    gets(kase);
    test=atoi(kase);
    for(i=0;i<test;i++){
      gets(input);
      k=0;
      flag=1;
      for(j=0;j<strlen(input);j++){
       if(input[j]=='['){
        stck[k]=3;
        k++;
       }
       else if(input[j]=='('){
       stck[k]=1;
       k++;
      }
      else if(input[j]==']'){
        if(k-1>=0){
         if(stck[k-1]==3){
         stck[k-1]=0;
         k--;
         }
         else {
             flag=0;
             break;
         }
        }
        else {
            flag=0;
            break;
        }
        }
        else if(input[j]==')'){
          if(k-1>=0){
         if(stck[k-1]==1){
         stck[k-1]=0;
         k--;
         }
         else {
             flag=0;
             break;
         }
        }
        else {
            flag=0;
            break;
        }


        }

      }
      if(flag==1 && stck[0]==0)printf("Yes\n");
      else printf("No\n");
      for(j=0;j<=k;j++)stck[j]=0;


    }


    return 0;
}
