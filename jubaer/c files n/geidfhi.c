#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[100000];
    int i,j,k,l,m,n,p,q;
    float d;
    scanf("%d",&n);
    getchar();
    while(n--){
    gets(str);
    l=strlen(str);
    m=sqrt(l);
    d=sqrt(l);
    if(m==d){
   for(i=0;i<m;i++){
    for(j=i;j<l;j=j+m){
        printf("%c",str[j]);
    }
   }
    }
   else printf("INVALID");
   printf("\n");
    }

    return 0;
}
