#include<bits/stdc++.h>
using namespace std;
int ara[100010];
int main()
{
    int i,j,k,l,m,n;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    ara[i]=m;
    sort(ara,ara+n+1);
//    for(i=0;i<=n;i++)
//        printf("%d ",ara[i]);
//    printf("\n");
    int p=0,q=n;
    while(p<=q)
    {
        k=(p+q)/2;
        //printf("%d %d\n",k,ara[k]);
        if(ara[k]==m)
        {
            j=k;
            break;
        }
        else if(ara[k]>m)
            q=k-1;
        else if(ara[k]<m)
            p=k+1;
    }
    //printf("%d",j);
    int b=j,a=j-1,c=j+1,f=0,s=0;
    while(f<n-1)
    {
        if(((ara[c]-ara[b]<ara[b]-ara[a])|| a<0)&& c<=n)
        {
            s+=ara[c]-ara[b];
            //printf("1 %d\n",s);
            b=c;
            c++;
            f++;
        }
        else if(((ara[c]-ara[b]>ara[b]-ara[a])|| c>n)&& a>=0)
        {
            s+=ara[b]-ara[a];
            // printf("2 %d\n",s);
            b=a;
            a--;
            f++;
        }
        else if(ara[c]-ara[b]==ara[b]-ara[a] && c<=n && a>=0)
        {
            int u,v;
            u=a,v=c;
            while(ara[v]-ara[b]==ara[b]-ara[u] && u>=0 && v<=n)
                u--,v++;
            if(ara[v]-ara[b]<ara[b]-ara[u] && c<=n)
            {
                s+=ara[c]-ara[b];
                //printf("1 %d\n",s);
                b=c;
                c++;
                f++;
            }
            else
            {
                s+=ara[b]-ara[a];
                // printf("2 %d\n",s);
                b=a;
                a--;
                f++;
            }
        }

    }
    printf("%d\n",s);
    return 0;
}
