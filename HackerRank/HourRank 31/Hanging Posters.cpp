#include<bits/stdc++.h>
using namespace std;

double ht[100009];
double ln[100009];

int main()
{
//    freopen("a.txt","w",stdout);
    int i,j,k,l,n,t,m,w,b;
    double h,x;
    double mx=0;

    scanf("%d %lf",&n,&h);

    for(i=0;i<n;i++)
        scanf("%lf",&ht[i]);

    for(i=0;i<n;i++)
        scanf("%lf",&ln[i]);

    for(i=0;i<n;i++)
    {
        x=ht[i]-(25*ln[i]/100);
        if(x>mx)
            mx=x;
    }
    mx-=h;
    mx=(mx<0? 0:mx);
    i=ceil(mx);
    printf("%d\n",i);

//    fclose(stdin);
    return 0;
}
