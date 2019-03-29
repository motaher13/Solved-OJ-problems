#include<bits/stdc++.h>
using namespace std;
int taka[20000]= {0},coin[]= {0,1,5,10,25,50};
int main()
{
    int i,j,k,l,m,n;
    taka[0]=1;

    for(i=1; i<=5; i++)
        for(j=coin[i]; j<7550; j++)
        {
            taka[j]=taka[j]+taka[j-coin[i]];
        }

    while(scanf("%d",&n)==1)
    {
        printf("%d\n",taka[n]);

    }
return 0;
}
//2 taka dia 4 taka koto vabe banano jay=1 taka dia 4 taka joto vabe banano jay+1 taka dia (4-2) taka joto vabe banano jay
//freopen("q.txt","w",stdout);
