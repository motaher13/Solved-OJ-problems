#include <stdio.H>
int main()
{
    long long i,j,k,l,n,ara[4500];

   l=1;
    for(i=2;;i++){
            int ck=0;

    for(k=2;k<=sqrt(i);k++){
    if(i%k==0){
            ck=1;
            break;
    }
    else if(k==sqrt(i)){
            ck=0;
    break;
    }
    }
    if(ck==0&&i!=1){
    ara[l]=i;
    l++;

    }
     if(l==1501)break;
}

  printf("%lld\n",ara[l-1]);
   return 0;
}
