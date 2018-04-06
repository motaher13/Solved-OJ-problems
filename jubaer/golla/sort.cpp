#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int a[100], i, j, k;
    for(i=0; i<100; i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a[],100);
    for(i=0;i<5;i++)printf("%d ",a[i]);


    return 0;
}
