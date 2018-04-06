#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    int i,j,k,l,m,n;
    vector<double>vc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        double m;
        scanf("%lf",&m);
        vc.push_back(m);
    }
    //printf("%lf\n",vc[0]);
    sort(vc.begin(),vc.end());
    double s=0;
    if(n%2==0)
    {
        for(i=0;i<n;i+=2)
        {
            s=s+vc[i+1]*vc[i+1]-vc[i]*vc[i];
            l=1;
        }
        s=s*pi;
        printf("%.10lf\n",s);
    }
    else
    {
        l=0;
        for(i=1;i<n;i+=2)
        {
            s=s+vc[i+1]*vc[i+1]-vc[i]*vc[i];
            l=1;
        }
        if(l==1){
        s=s+vc[0]*vc[0];
        s=s*pi;}
        else
            s=pi*vc[0]*vc[0];
        printf("%.10lf\n",s);
    }
    return 0;
}
