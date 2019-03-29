#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,t,r,w,p,x,y;
    scanf("%d",&t);
    for(p=1;p<=t;p++)
    {
        scanf("%d",&r);
        l=(100*r)/20;
        w=(60*r)/20;
        x=(45*l)/100;
        y=w/2;
        printf("Case %d:\n",p);
        printf("-%d %d\n",x,y);
        printf("%d %d\n",(l-x),y);
        printf("%d -%d\n",(l-x),y);
        printf("-%d -%d\n",x,y);
    }
    return 0;
}
