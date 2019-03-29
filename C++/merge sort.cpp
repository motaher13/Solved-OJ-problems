#include <stdio.h>
int m,ara[1000];
void merge(int p,int q,int r)
{
    int n1,n2,le[10000],ri[10000],i,j,k,u=0;
    n1=q-p+1;
    n2=r-q;
    for(i=1; i<=n1; i++)
        le[i]=ara[p+i-1];

    for(j=1; j<=n2; j++)
        ri[j]=ara[q+j];

    le[n1+1]=213213;
    ri[n2+1]=232434;
    i=1,j=1;
    for(k=p; k<=r; k++)
    {
        if(le[i]<=ri[j])
        {
            ara[k]=le[i];
            i++;
        }
        else
        {
            ara[k]=ri[j];
            j++;
        }
    }

}
void mergesort(int p,int r)
{

    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);

    }
}
int main()
{
    int i,j,k,l;
    int n;
    while(scanf("%d",&n))
    {
        m=0;
        for(i=1; i<=n; i++)
            scanf("%d",&ara[i]);

        mergesort(1,n);

        for(i=1; i<=n; i++)
            printf("%d ",ara[i]);
    }
    return 0;
}
//void merge(int p,int q,int r)
//{
//
//
//    vector<int>v1,v2;
//    for(int i=p; i<=q; i++)
//    v1.push_back(ara[i]);
//
//    v1.push_back(214569);
//    for(int i=q+1; i<=r; i++)
//    v2.push_back(ara[i]);
//
//    v1.push_back(244569);
//
//    int j=0,k=0;
//    for(int i=p; i<=r; i++)
//    {
//        if(v1[j]<=v2[k])
//        {
//            ara[i]=v1[j];
//            j++;
//        }
//        else
//        {
//            ara[i]=v2[k];
//            k++;
//        }
//    }
//}





