
#include<bits/stdc++.h>
using namespace std;


int binmod(int a, int b,int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main(){


    int i,j,k,l,m,n,t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d %d",&x,&y,&z);
        j=binmod(x,y,z);
        printf("%d\n",j);
    }
    scanf("%d",&n);
    return 0;


}
