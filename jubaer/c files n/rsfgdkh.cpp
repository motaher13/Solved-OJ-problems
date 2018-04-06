#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i,j,k,l,m,n,sum;
    scanf("%d",&n);
    getchar();
    while(n--){
    gets(str);
    k=0;
    sum=0;
    for(i=strlen(str)-1;i>=0;i--){
            if(str[i]==' ')continue;
    if(k%2==0){
    sum=sum+(int)str[i]-48;
    k++;
    }
    else if(k%2!=0){
    l=0;
    m=(int)str[i]-48;
    m=m*2;
    while(m!=0){
    l=l+m%10;
    m=m/10;
    }
   sum=sum+l;
   k++;
    }
    }
    if(sum%10==0)printf("Valid");
    else printf("Invalid");
    printf("\n");
    }
    return 0;
}
