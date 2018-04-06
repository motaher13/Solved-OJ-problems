#include <stdio.h>
#include <math.h>
int main()
{
   long long n,i,l,a,b,k;
int max=0;
 scanf("%lld%lld",&a,&b);

 for(k=a;k<=b;k++){
      n=k;
      if(n%2!=0){
i=1;
l=0;
   while(i<=sqrt(n))
    {
        if(n%i==0) {
            l++;
            if (i != (n / i)) {
                l++;
                }
        }

        i=i+2;
    }
      }
    else{
      i=1;
l=0;
   while(i<=sqrt(n))
    {
        if(n%i==0) {
            l++;
            if (i != (n / i)) {
                l++;
                }
        }

        i=i+1;;
    }
    }
   if(max<l)max=l;
 }
 printf("%d",max);
   return 0;
}
