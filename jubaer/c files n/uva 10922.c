#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ck,n,sum;
    char str[1000];
    while(scanf("%s",str)){
    if(strcmp(str,"0")==0)break;
    k=0;
    j=0;
    for(i=0;i<strlen(str);i++){
    k=k+(int)str[i]-48;
    }

    if(k%9!=0)ck=1;
    else if(k%9==0){
    ck=0;
    j++;
    }
    while(k>9){
    j++;
    n=k;
    sum=0;
    while(n!=0){
    sum=sum+(n%10);
    n=n/10;
    }
    k=sum;
    }

    if(ck==0)
    printf("%s is a multiple of 9 and has 9-degree %d.\n",str,j);
    else if(ck==1)printf("%s is not a multiple of 9.\n",str);
    }
    return 0;

}
