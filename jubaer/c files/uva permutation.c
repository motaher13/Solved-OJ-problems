#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,d,l,n,q,k,u,p;
    char str[100000],str2[1000][1000],ch;
    int ara[100000];
   scanf("%d",&n);
   printf("\n");
   for(p=0;p<n;p++){
    i=0;
    k=0;
    u=0;
    while(ch=getchar()){
          if(u>0)if(ch=='\n'){
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
    scanf("%s",str);
    strcpy(str2[ara[l]],str);
    }
    for(l=1;l<=i;l++){
   printf("%s\n",str2[l]);
    }
    printf("\n");
   }
    return 0;
}
