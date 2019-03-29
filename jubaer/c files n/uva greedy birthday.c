#include <stdio.h>
#include <string.h>
int main()
{
    char str[200][1000], rev[10000];
    int tk[10000],i,j,k,l,m,n,p,q,u,cou;
    cou=0;
   while(scanf("%d",&n)==1){

    for(i=0;i<n;i++){
    tk[i]=0;
    scanf("%s",str[i]);
    }
    for(i=0;i<n;i++){
    scanf("%s",rev);
    scanf("%d%d",&p,&q);
    if(q==0)u=0;
    else
    u=p%q;

    for(l=0;l<n;l++){
    if(strcmp(rev,str[l])==0){
            if(q==0)p=0;
    tk[l]=tk[l]-p+u;
    }
    }
    for(j=0;j<q;j++){
    scanf("%s",rev);
     for(k=0;k<n;k++){
    if(strcmp(rev,str[k])==0){
    tk[k]=tk[k]+(p/q);
    }
    }
    }
    }
 if(cou>0)printf("\n");
    for(i=0;i<n;i++)printf("%s %d\n",str[i],tk[i]);
    cou++;

   }
   return 0;
}
