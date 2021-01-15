#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&m,&k);
        int p=n/k;
        int first=min(m,p);
        double rest=m-p;

        if(rest<0){
            printf("%d\n",m);
            continue;
        }

        int second=ceil(rest/(double) (k-1));
        if(second>=first)
            printf("0\n");
        else
            printf("%d\n",first-second);


    }

}
