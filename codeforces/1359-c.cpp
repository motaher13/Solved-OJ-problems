
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    double t,c,h,a,b;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%lf %lf %lf",&h,&c,&t);
        b=t-((h+c)/2);
        a=(((h-c)/2)/b)-1;
        printf("%lf\n",a);

    }

}
