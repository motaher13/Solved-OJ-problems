#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,d,l,n,q,k,u,p;
    char str2[1000][1000],ch;
    int ara[1000];
    p=0;
   scanf("%d",&n);
   while(n--){
    i=0;
    k=0;
    u=0;
    while(1){
        scanf("%d",&ara[i]);
        i++;
        if(getchar()=='\n')break;
   u++;
    }
    for(l=0;l<i;l++){
    scanf("%s",str2[ara[l]]);

    }
    for(l=1;l<=i;l++){
   printf("%s\n",str2[l]);
    }
   if(n>0) printf("\n");

   }
    return 0;
}
