#include<bits/stdc++.h>
using namespace std;
int ara[1000010];
int arb[1000010];
int arc[1000010];


//here, complexity is O(n)
//but it could be solved in O(logn)
//see geek for the solution

int main()
{

    int s,i,j,k,l,m,n,p,t,b;

    scanf("%d",&t);
    while(t--)
    {
        int mx=INT_MIN;
        scanf("%d",&n);

        for(i=0;i<n;i++) scanf("%d",&ara[i]);

        for(i=0;i<n;i++) scanf("%d",&arb[i]);

        i=0,j=0,k=0;
        while(i<n || j<n)
        {
            if(i>=n)
                arc[k]=arb[j],j++,k++;
            else if(j>=n)
                arc[k]=ara[i],i++,k++;

            else if(ara[i]<=arb[j])
                arc[k]=ara[i],i++,k++;
            else
                arc[k]=arb[j],j++,k++;

        }
        l=(arc[k/2]+arc[k/2-1])/2;
        printf("%d\n",l);
    }

    return 0;

}



