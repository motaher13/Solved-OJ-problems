#include <stdio.h>
#include <string.h>
int main()
{
    char dic[2000][10],str[200000];
    int a,b,c,d,e,f,n,g,ara[100000],i,p,k,u;
    while(scanf("%d",&g)==1){
            if(g==0)break;
            scanf("%d",&n);
    p=0;
    k=0;
    for(i=0;i<n;i++){
    scanf("%d",&a);
    if(i==0){
    ara[p]=a;

    strcpy(dic[p],"black");
    p++;
    }
    else if(i>0){
    c=0;
    for(u=0;u<p;u++){
    if(ara[u]==a){
    strcpy(str,dic[u]);
    c=1;
    break;
    }
    }
    if(c==0){
    ara[p]=a;
   if(p%2==0)strcpy(dic[p],"black");
   else strcpy(dic[p],"white");
    strcpy(str,dic[p]);
    p++;
    }
    }
    scanf("%d",&b);
    if(i==0){
      ara[p]=b;
      strcpy(dic[p],"white");
      p++;
    }
    else if(i>0){
            c=0;
        for(u=0;u<p;u++){
            if(ara[u]==b){
                if(strcmp(str,dic[u])==0){
                    k=1;
                    c=1;
                    break;
                }
                else if(strcmp(str,dic[u])!=0){
                    c=1;
                    break;
                }
            }
        }
    if(c==0){
        if(strcmp(str,"black")==0)strcpy(dic[p],"white");
        else strcpy(dic[p],"black");
        ara[p]=b;
        p++;
    }
    }
    }
    if(k==0)printf("BICOLORABLE.\n");
    else printf("NOT BICOLORABLE.\n");

    }
    return 0;
}
