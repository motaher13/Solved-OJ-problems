#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,l,ck,kk,d,p,f,n,u,q;
    char str[1000],rev[100][100],ch;
    gets(str);
    scanf("%d",&n);
    q=1;
    for(u=0;u<n;u++){
    scanf("%s",rev[u]);
    }
    for(u=0;u<n;u++){
    d=strlen(str);
    f=strlen(rev[u]);
    k=0,l=0,kk=0,p=0;
    ck=0;
    for(j=p;j<f;j++){
    ch=rev[u][j];
    for(i=k;i<d;i++){
    k++;
    if(ch==str[i]){
    l++;
     if(l==f) ck=1;
    break;
    }
    else if(ch!=str[i]){
    l=0;
    j=-1;
    break;
    }
    }
    if(ck==1){
    kk=1;
    }
    }
    if(kk==1)printf("Case %d: yes\n",q);
    else printf("Case %d: no\n",q);
    q++;
    }
    return 0;
}
