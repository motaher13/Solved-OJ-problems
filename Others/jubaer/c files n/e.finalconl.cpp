#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>
#include <algorithm>
char str[1000000];
int main()
{
    int i,j,k,l,m,n,ck,count,p,q,r,t,d=1;
    scanf("%d",&t);
    while(t--){
    scanf("%s",str);
  ck=0;
  count=0;
    for(i=0;str[i];i++){
            if(str[i]==' ')continue;
            if(str[i]=='^'&&ck==2){
                r=i;
                str[i]=' ';
                str[p]=' ';
                str[q]=' ';
                count++;
                ck=0;
                i=p-2;
                if(i<=0)i=-1;
                continue;
            }
        if(str[i]=='^'){
            p=i;
            ck=1;
            continue;
        }
        if(str[i]=='_'&&(ck==1||ck==2)){
        q=i;
        ck=2;
    }
    }
    printf("Case %d: %d",d++,count);
    printf("\n");
    }
     return 0;
}
