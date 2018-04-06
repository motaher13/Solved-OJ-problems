#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int main()
{

    int i,j,k,l,m,n;

    scanf("%d",&m);
    if(m==1)
    {
        printf("%d\n",m);

    }
    if(m==0)
        printf("10\n");
    else
    {
        vc.clear();
        for(i=9; i>1; i--)
        {
            while(m%i==0)
            {
                m=m/i;
                vc.push_back(i);
            }
        }

        if(m!=1)
            printf("-1\n");
        else
        {
            sort(vc.begin(),vc.end());
            for(i=0; i<vc.size(); i++)
                printf("%d",vc[i]);
            printf("\n");
        }


    }

    return 0;
}

