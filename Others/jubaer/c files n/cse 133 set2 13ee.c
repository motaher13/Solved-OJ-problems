#include <stdio.h>
int main()
{
    char str[1000],rev[100][100],n,u;
    int i,j;
    gets(str);
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",rev[i]);
    }
    for(u=0;u<n;u++){
int   k=0,ck=0, l=1,p=0;
    for(i=0;i<strlen(rev[u]);i++){
    for(j=k;j<strlen(str);j++){
    if(rev[u][i]==str[j]){
                l++;
       if(l==strlen(rev[u]))ck=1;

    k++;

      break;
    }
   else if(rev[u][i]!=str[j]){
            l=1;
    i=0;
    k++;
    break;
    }
    }
    if(ck==1)break;
    }
    printf("%d %d ",k,ck);
    if(ck==1)printf("Case %d: Yes\n",u+1);
    else printf("Case %d: No\n",u+1);
    }
}
