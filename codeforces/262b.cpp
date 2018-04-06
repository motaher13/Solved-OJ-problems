#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ara[100100];
int main()
{
    int i,j,k,l,m,n,p,q,r,s=0,t,c=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n && k>0;i++)
    {
        //scanf("%d",&ara[i]);
        if(ara[i]<0)
        {
            if(k>0){
                ara[i]=ara[i]*(-1);
                //s+=ara[i];
                k--;}
//            else
//                s+=ara[i];
        }
        else if(ara[i]>=0)
        {
            if(k>0)
                k=k%2;
//            if(k==0)
//                s+=ara[i];
            if(k==1)
            {
                if(i>0 && ara[i-1]<ara[i])
                    ara[i-1]=ara[i-1]*(-1);
                else
                    ara[i]=ara[i]*(-1);
                k--;
            }
        }

        if(i==n-1 && k!=0)
        {
            //printf("%d %d\n",s,k);
            i=-1;
            sort(ara,ara+n);
            //printf("%d %d\n",i,ara[0]);
        }

    }
    for(i=0;i<n;i++)
        s+=ara[i];
    printf("%d\n",s);
    return 0;
}
