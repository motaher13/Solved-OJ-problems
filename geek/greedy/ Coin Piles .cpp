
//#include<bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//    int t,w,i,j,l,m,n,k,s,mn;
//    int ara[200];
//    scanf("%d",&t);
//    while(t--)
//    {
//        s=0,mn=INT_MAX;
//        scanf("%d %d",&n,&k);
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&ara[i]);
//            if(ara[i]<mn)
//                mn=ara[i];
//        }
//        sort(ara,ara+n);
//        s=0;
//        for(i=0;i<n;i++)
//        {
//            int nw=0;
//            for(j=n-1;j>i && ara[j]-ara[i]>k;j--)
//            {
//                nw+=ara[j]-ara[i]-k;
//            }
////            printf("%d\n",nw);
//            if(ara[i]<=nw)
//            {
//                s+=ara[i];
//
//            }
//            else
//            {
//                s+=nw;
//                break;
//            }
//
//        }
//
//        printf("%d\n",s);
//    }
//}











#include <bits/stdc++.h>
using namespace std;

int findMaxRemovedCoins(int arrPiles[], int iNoOfPiles, int iDiff)
{
    int ans=0,halfans=0,prevans = INT_MAX;
    std::sort(arrPiles,arrPiles+iNoOfPiles);
    printf("\n");
    for(int i=0;i<iNoOfPiles;i++)
        printf("%d ",arrPiles[i]);
    printf("\n");

    for(int i = 0 ; i < iNoOfPiles ; i++)
    {
        for(int j = iNoOfPiles - 1 ; j > i ; j--)
        {
            if(arrPiles[j] - arrPiles[i] <= iDiff)
            {
                break;
            }
            else
            {
                ans += arrPiles[j] - arrPiles[i] - iDiff;
            }
        }
        ans = halfans+ans;
        halfans += arrPiles[i];
        if(prevans > ans)
        {
            prevans = ans;
            printf("1=%d ",i);
        }
        printf("pre=%d,ans=%d,i=%d ",prevans,ans,i);
        if(ans < halfans)
        {
            printf("2=%d ",i);
            return prevans;
        }

        ans = 0;
    }
    return halfans;
}

int main() {
    int t;
	cin >> t;
	while (t > 0)
	{
	    int iNoOfPiles,iDiff;
	    cin>>iNoOfPiles >> iDiff;

	    int arrPiles[iNoOfPiles];

	    for(int i = 0 ; i < iNoOfPiles ; i++)
	    {
	        cin >> arrPiles[i];
	    }

	    cout<<endl<<findMaxRemovedCoins(arrPiles, iNoOfPiles, iDiff)<<endl;

	    t--;
	}
	return 0;
}

