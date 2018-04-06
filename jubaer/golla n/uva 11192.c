#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,u,n,r,w,g;
    char str[100000],rev[100000],ch;
    while(scanf("%d",&g)){
            if(g==0)break;

    scanf("%s",str);
    k=0;
    r=strlen(str);
    n=r/g;
    while(i!=r){
            i=k;
    for(i=k,j=0;i<r;i++){
    rev[j]=str[i];
    j++;
    k++;
    if(j==n)break;
    }

    rev[j++]='\0';
    w=strlen(rev);
    for(l=0,u=strlen(rev)-1;l<u;l++,u--){
    ch=rev[u];
    rev[u]=rev[l];
    rev[l]=ch;
    }
    printf("%s",rev);
    if(i==r-1)break;
    else continue;
    }
    printf("\n");
    }
    return 0;
}
