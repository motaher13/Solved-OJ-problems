
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,t, n,x,m,a,b,l;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&x,&m);
        int mx=-1,mn=-1;

        while(m--){
            scanf("%d %d",&a,&b);

            if((a>=mn && a<=mx)||(b>=mn &&b<=mx) || (a<mn && b>mx)){
                if(a<mn) mn=a;
                if(b>mx) mx=b;
            }
            else if(x>=a && x<=b){
                mn=a;
                mx=b;
            }
        }

        int sum=0;
        sum=mx-mn+1;

        if(sum==0) sum=1;

        printf("%d\n",sum);

    }
}


