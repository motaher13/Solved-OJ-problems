#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l;
    char str[1000];
    while(scanf("%s",str)!=EOF){
    k=0;
    for(i=0;i<strlen(str);i++){
    if((int)str[i]<=90&&(int)str[i]>=65){
    l=(int)str[i]-38;
    k=k+l;
    }
    else if((int)str[i]>96){
    l=(int)str[i]-96;
    k=k+l;
    }
    }
    if(k==1||k==2||k==3)printf("It is a prime word.\n");
    else{
    for(j=2;j<=k/2;j++){
    if(k%j==0){
    printf("It is not a prime word.\n");
    break;
    }
    else if(j==k/2)printf("It is a prime word.\n");
    }
    }
    }
    return 0;
}
