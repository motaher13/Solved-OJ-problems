#include <stdio.h>
    char str[3000000],rev[3000000][15],sto[100],tr[100];
    int ara[10000];
int main()
{
    int i,j,k,l,max,p,n,ck,u;
    while(scanf("%d%s",&n,str)==2){
    max=0;
    p=0;
    for(i=0;str[i];i++){
            k=0;
    for(j=i;;j++){
    sto[k]=str[j];
    k++;
    if(k==n)break;
    }
    sto[k]='\0';
    ck=1;
    for(u=0;u<p;u++){
    if(strcmp(rev[u],sto)==0){
    ck=0;
    ara[u]++;
    if(max<ara[u]){
    max=ara[u];
    strcpy(tr,rev[u]);
    }
    }
    }
    if(ck==1){
      strcpy(rev[p],sto);
      ara[p]=1;
      if(max<ara[p]){
        max=ara[p];
        strcpy(tr,sto);
      }
      p++;
    }
    }
    printf("%s\n",tr);
    }
    return 0;
}
