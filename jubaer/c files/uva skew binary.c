#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    long long i,j,k,sum;
    char str[10000];
    while(scanf("%s",str)){
            if(strcmp(str,"0")==0)break;
    sum=0;
    for(i=strlen(str)-1,k=1;i>=0;i--,k++){

    sum=sum+((int)str[i]-48)*(pow(2,k)-1);
    }
   printf("%lld\n",sum);
    }
    return 0;
}
