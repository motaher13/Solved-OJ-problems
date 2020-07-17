#include <stdio.h>
int main(){

    long long i,j,k,f,m,n,r,ck,l;
    long long a1[1000],a2[1000],ara[1000];

    while(scanf("%lld",&n)){
            if(n==0)break;
   l=0;
    for(i=10000;i<=99999;i=i+1){
    if(i%n==0){

    m=i/n;
    f=i;
    for(j=0;j<5;j++){
    ara[j]=f%10;
    f=f/10;
    }
    for(j=5;j<10;j++){
    ara[j]=m%10;
    m=m/10;
    }
     ck=0;
    for(j=0;j<9;j++){
    for(k=j+1;k<10;k++){
    if(ara[j]==ara[k]){
        ck=1;
            break;
    }
    else if(j==8){
            a1[l]=i;
            a2[l]=i/n;
            l++;
    }
    }
    if(ck==1){
            break;
    }
}
    }

    }
    if(l==0)printf("There are no solutions for %lld.\n\n",n);
    else{
    for(r=0;r<l;r++){
        printf("%05lld / %05lld = %lld\n\n",a1[r],a2[r],n);

    }
    }

    }
    return 0;
}
