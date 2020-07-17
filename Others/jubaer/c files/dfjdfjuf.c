#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
    double ax,ay,bx,by,cx,cy,c1,c2,c3,dy,dx,ex,ey,fx,fy,t1y,t1x,t2x,t2y,t3x,t3y,r,q,d;
    scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);
    dx=((bx*2)+(cx))/3;
    dy=((by*2)+(cy))/3;
    ex=((cx*2)+ax)/3;
      ey=((cy*2)+ay)/3;
    fx=((ax*2)+bx)/3;
     fy=((ay*2)+by)/3;
     c1=(ay-dy)/(ax-dx);
     c2=(by-ey)/(bx-ex);
     c3=(cy-fy)/(cx-fx);
     t1y=c1*c3*(cx-ax)-(c1*cy)+(c3*ay);
     t1y=t1y/(c3-c1);
     t1x=((t1y-ay)/c1)+ax;
     t2y=c1*c2*(bx-ax)-(c1*by)+(c2*ay);
     t2y=t2y/(c2-c1);
     t2x=((t2y-ay)/c1)+ax;
     t3y=c2*c3*(bx-cx)-(by*c3)+(c2*cy);
     t3y=(t3y)/(c2-c3);
     t3x=((t3y-by)/c2)+bx;
   r=(t1x*t2y)+(t2x*t3y)+(t3x*t1y);
    q=(t1y*t2x)+(t2y*t3x)+(t3y*t1x);
    d=r-q;
    if(d<0)d=-d;
    printf("%.lf\n",(d/2));
    }
    return 0;

}
