#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{
    int i,j,d,l,n,q,k,u,p;
    char str2[N][N],ch;
    int ara[N];
   scanf("%d",&n);
   printf("\n");
   while(n--){
    i=0;
    k=0;
    u=0;
    while(1){
        ch=getchar();
          if(u>0&&ch=='\n'){
                  ara[i]=k;
                k=0;
                i++;
                break;
          }
           if((int)ch!=32&&(ch)!=10)k=((int)ch-48)+k*10;

            if(ch==' '){
                ara[i]=k;
                k=0;
                i++;
            }
   u++;
    }
    for(l=0;l<i;l++){
    scanf("%s",str2[ara[l]]);

    }
    for(l=1;l<=i;l++){
   printf("%s\n",str2[l]);
    }
    printf("\n");
   }
    return 0;
}
