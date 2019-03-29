#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    long long ara[1000];
    long long i,j,k,n,am,l;
    while(scanf("%d",&n)==1){
    l=0,k=0;
    for(i=0;i<n;i++){
    scanf("%s",str);
    if(strcmp(str,"donate")==0){
    scanf("%lld",&am);
    k=k+am;
    }
    else if(strcmp(str,"report")==0){
    ara[l]=k;
    l++;
    }
    }
   for(i=0;i<l;i++)printf("%lld\n",ara[i]);
    }
    return 0;
}
