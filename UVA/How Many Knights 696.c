#include<stdio.h>
#include<math.h>
int main()
{
    int j,k,l,m,n;
    double i,p,q,a;
    while(scanf("%lf %lf",&p,&q)==2)
    {
        if(p==0 && q==0)
            break;
        if(p>q)
        {
            a=p;
            p=q;
            q=a;
        }
        if(p==1 || q<=2){
            i=p*q;
            printf("%.0lf knights may be placed on a %.0lf row %.0f column board.\n",i,p,q);}
        else if(p==2){
            i=ceil(p*q/2)+1;
            printf("%.0lf knights may be placed on a %.0lf row %.0f column board.\n",i,p,q);}
        else{
        i=ceil(p*q/2);
        printf("%.0lf knights may be placed on a %.0lf row %.0f column board.\n",i,p,q);}
    }
    return 0;
}
