#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,l,t,n,mx,x1,x2,y1,y2,a1,a2,b1,b2;

	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);

	    if(((a1>=x1 && a1<=x2)||(a2>=x1 && a2<=x2)) && ((b1<=y1 && b1>=y2) ||(b2<=y1 && b2>=y2) ))
            printf("1\n");
        else
            printf("0\n");
	}
}

