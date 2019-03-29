//#include<bits/stdc++.h>
//using namespace std;
//int an[1500],am[1500];
//int main()
//{
////    freopen("a.txt","w",stdout);
//    int i,j,k,l,m,n,t;
//
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d %d",&n,&m);
//
//        for(i=0;i<m;i++)
//            scanf("%d",&am[i]);
//
//        int sn=0,sm=0;
//        int p=0,q=0,s=0;
//        i=0,j=0,k=30;
//        while(1)
//        {
//            if(i>=n && j>=m)
//            {
//                s+=max(sn,sm);
//                break;
//            }
//
//            else if(i<n && an[i]==an[i+1])
//                sn+=an[i],i++;
//
//            else if(j<m && am[j]==am[j+1])
//                sm+=am[j],j++;
//
//            else if(an[i]==am[j])
//            {
//                s+=max(sn,sm);
//                s+=an[i];
//                sn=0,sm=0;
//                i++,j++;
//            }
//
//            else if(i==n || (j<m && an[i]>am[j]))
//                sm+=am[j],j++;
//
//            else if(j==m|| (i<n && an[i]<am[j]) )
//                sn+=an[i],i++;
//        }
//
//        printf("%d\n",s);
//    }
////    fclose(stdin);
//}












#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    int an[1010],am[1010];

    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&an[i]);
        for(i=0;i<m;i++)
            scanf("%d",&am[i]);

        int sn=0,sm=0;
        int p=0,q=0,s=0;
        i=0,j=0,k=30;
        while(k--)
        {
            if(i>=n && j>=m)
            {
                s+=max(sn,sm);
                break;
            }

            else if(i<n && an[i]==an[i+1])
                sn+=an[i],i++;

            else if(j<m && am[j]==am[j+1])
                sm+=am[j],j++;

            else if(an[i]==am[j])
            {
                s+=max(sn,sm);
                s+=an[i];
                sn=0,sm=0;
                i++,j++;
            }

            else if(i==n || (j<m && an[i]>am[j]))
                sm+=am[j],j++;

            else if(j==m|| (i<n && an[i]<am[j]) )
                sn+=an[i],i++;

        }

        printf("%d\n",s);
    }
}
