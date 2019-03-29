#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    long long i,j,k,l,m,n,p,q,t,r,s;
    map<int,int>a;
    map<int,int>b;
    a[0]=1,a[1]=1,k=0;

    for(i=3;i<100000000;i=i+2)
        if(a[i]==0)
        {
            b[k]=i;
            k++;

            for(j=2;j*i<100000000;j=j+2)
                a[j*i]=1;
        }
    for(i=0;i<k;i++)
        printf("%lld ",b[i]);

}

























