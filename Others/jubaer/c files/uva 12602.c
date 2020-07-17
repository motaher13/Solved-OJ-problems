#include <stdio.h>
int main()
{
    char str[20];
    int i,j,k,l,r,u,t,ck,d,N,p;
    scanf("%d",&p);
while(p--){
    scanf("%s",str);
    ck=0;
    l=2;
    k=0;
    t=0;
    d=1000;
    for(i=0;str[i];i++){
            if(str[i]=='-'){
                ck=1;
                continue;
            }
        if(ck==0){
                j=((int)str[i]-65);
                u=1;
                N=26;
        for(r=0;r<l;r++){
            u=u*N;
        }
            k=k+(u*j);
            l--;
        }
        if(ck==1){
        t=t+((int)str[i]-48)*d;
        d=d/10;

        }
    }
     r=k-t;
     if(r<0)r=-r;
 if(r<=100)printf("nice");
 else printf("not nice");
 printf("\n");
    }
    return 0;
}
