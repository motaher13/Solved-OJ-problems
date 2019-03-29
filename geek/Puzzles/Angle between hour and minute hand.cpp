#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,l,t,n;
	double m,h,a,b;

	scanf("%d",&t);
	while(t--)
	{
	    scanf("%lf %lf",&h,&m);
	    if(m==60)
            m=0;
        if(h==12)
            h=0;
	    a=m*0.5+h*30;
	    b=m*6;
	    a=abs(a-b);
	    if(a>180)
            a=360-a;

	    printf("%d\n",(int)a);
	}
}
