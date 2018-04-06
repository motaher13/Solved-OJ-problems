#include <stdio.h>

#include <algorithm>
using namespace std;
int main()
{
    int ara[100000],i,k,j,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++){
    printf("%d ",ara[i]);
    }


}
