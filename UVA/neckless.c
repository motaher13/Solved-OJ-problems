#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,c,d;
    double v,v0,vt,p,p1;
    while(scanf("%lf %lf",&vt,&v0)==2)
    {
        if(vt==0 && v0==0)
            break;
        else if(vt<=v0)
            printf("0\n");
        else
        {
            p=0,d=0,c=0;
            for(i=1;vt>v0*i;i++)
            {
                p1=0.3*sqrt(vt/i-v0)*i;
                if(p1>p){
                    d++;
                    p=p1;}

                else if(p1<p)
                    break;
                else {
                    printf("0\n");
                    c=1;
                    break;}
            }
            if(c==0)
                printf("%d\n",d);
        }
    }
    return 0;
}
