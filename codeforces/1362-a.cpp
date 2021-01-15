#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    long long i,t,j,k,l,m,n,a,b,c,d,f;
    scanf("%lld",&t);
    for(f=0;f<t;f++)
    {
        scanf("%lld %lld",&a,&b);
        c=max(a,b);
        d=min(a,b);

        if(c%d!=0){
            printf("-1\n");
            continue;
        }
        k=c/d;

        if(!isPowerOfTwo(k)){
            printf("-1\n");
            continue;
        }

        k=log2(k);
        m=0;
        i=3;
        while(k>0){
            if(k/i>0){
                m=m+k/i;
                k=k%i;
                i--;
            }else{
                i--;
            }
        }
        printf("%lld\n",m);

    }

    return 0;

}

