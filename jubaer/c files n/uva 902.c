#include <stdio.h>
#include <string.h>
 char str[500000],sto[500000],rev[500000],copy[500000];
int main()
{
    int i,j,k,l,m,n,ck,p,q,r,s,t,max;
    while(scanf("%d",&n)==1){
        getchar();
            gets(str);
    max=0;
    for(i=0;str[i];i++){
    l=0;
    p=0;
   for(j=i;l<n;l++,j++){
   sto[l]=str[j];
   }
   sto[l]='\0';
   for(k=0;str[k];k++){
   s=0;
   for(m=k;s<n;s++,m++){
   rev[s]=str[m];
   }
   rev[s]='\0';
   if(strcmp(sto,rev)==0)p++;
   }
   if(p>max){
   max=p;
   strcpy(copy,sto);
   }
    }
    printf("%s\n",copy);
    }
    return 0;
}
