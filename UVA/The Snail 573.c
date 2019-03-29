#include<stdio.h>
int main()
{
    int i,j,k,l,u,h,d,f;
    double ih,as,dc,hc,hs,p,q;
    while(scanf("%d %d %d %d",&h,&u,&d,&f)==4)
    {
        k=0,l=0,hs=0,p=u;
        q=p*f/100;
        for(i=1; ;i++)
        {
            ih=hs;
            printf("ih=%lf  ",ih);
            dc=p;
            printf("dc=%lf  ",dc);
            if(dc<0){
                k=1;
                break;}
            hc=ih+dc;
            printf("hc=%lf  ",hc);
            if(hc>(double)h){
                l=1;
                break;}
            hs=hc-d;
            if(hs<0){
                k=1;
                break;
            }
            printf("hs=%lf  ",hs);
            p=p-q;
            printf("p=%lf  ",p);
            printf("\n");

            //printf("")

        }
        if(k==1)
            printf("failure on day %d\n",i);
        else if(l==1)
            printf("success on day %d\n",i);
    }
}
