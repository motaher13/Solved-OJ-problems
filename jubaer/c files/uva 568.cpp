#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
long long ara[20000],kept,n,t;
int i,j,l,ck,r;

ara[1]=1;
ara[2]=2;
ara[3]=6;
kept=6;
for(i=4;i<=10000;i++){
        ck=0;
kept=kept*i;
t=ara[i-1]*i;
if(i%100==50||i%1000==500){
    while(1){
            l=kept%10;
        if(l>0){
                if(l%2==0){
                    ara[i]=l;
                    kept=l;
                    break;
                }

            else if(l%2!=0){
            while(1){
          r=t%10;
if(r>0){
    ara[i]=r;
    kept=r;
    ck=1;
    break;
}
t=t/10;
}
    }

   if(ck==1)break;
        }
        kept=kept/10;
        }
}
else if(i%10==4||(i+1)%100==50||(i+1)%1000==500){
    n=kept;
    while(1){
        l=n%10;
        if(l>0){
            ara[i]=l;
            break;
        }
        n=n/10;
    }

}

else {
    while(1){
        l=kept%10;
        if(l>0){
         ara[i]=l;
         kept=l;
         break;
        }
        kept=kept/10;
    }
}
}
while(scanf("%d",&j)){
    printf("%d  %lld\n",j,ara[j]);

}


/*for(i=1;i<10;i++){
    printf("%lld ",ara[i]);
}*/


}
