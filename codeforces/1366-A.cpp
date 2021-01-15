
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m=0,n,t,x,y,a,b;
    scanf("%d\n",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        k=max(a,b);
        l=min(a,b);

        if(k>=(2*l)){
            printf("%d\n",l);
            continue;
        }
        int sum=0;
        sum+=k/3;
        k=k%3;
        sum+=l/3;
        l=l%3;
        if(l==0 || k==0){
            printf("%d\n",sum);
            continue;
        }

        m=min(min(k,l),max(k,l)/2);
        sum+=m;
        printf("%d\n",sum);
    }

    return 0;
}

