#include <stdio.h>
int main()
{
    int ara[100000],i,j,k,l,m,n,o;
    scanf("%d",&j);
    o=1;
    while(j--){
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    k=0;
    m=0;
    l=ara[0];
    for(i=1;i<n;i++){
    if((ara[i]-l)>0)m++;
    else if((ara[i]-l)<0)k++;
    l=ara[i];
    }
    printf("Case %d: ",o);
    printf("%d %d\n",m,k);
    o++;
    }
    return 0;
}
