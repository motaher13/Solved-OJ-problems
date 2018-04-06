#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n>>k;
        l=0;
        for(i=0;i<n;i++)
        {
            cin>>j;
            if(j%2!=0)
                l++;
        }
        if(l%2==0)
            {
                if(k==1)
                    cout<<"odd"<<endl;
                else
                    cout<<"even"<<endl;
            }
        else
            cout<<"even"<<endl;
    }
    return 0;
}
