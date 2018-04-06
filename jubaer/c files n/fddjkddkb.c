
#include <stdio.h>
int main()
{
    int ara[10000],bat[10000],bow[10000],field[10000],t;
    double v,w,g;
    int i,j,k,l,n,u,ric[10000],soe[10000],max[10000],r,m,cou,h,o,a,b,c;
    cou=1;
    scanf("%d",&n);

    double sum=0;
    for(i=1;i<=n;i++){

        scanf("%d%d%d",&a,&b,&c);
        v=((.8*a)+(.2*c));
        if(v==(int)v)bat[i]=(int)v;
        else{
        o=v;
        v=v-.5;
        if(o>v)bat[i]=o;
        else if(o<=v)bat[i]=o+1;
        }
        v=((.7*b)+(.10*a)+(.2*c));
         if(v==(int)v)bow[i]=(int)v;
        else{
                o=v;
        o=v;
        v=v-.5;
        if(o>v)bow[i]=o;
        else if(o<=v)bow[i]=o+1;
        }
        v=((.4*a)+(.4*b)+(.2*c));
 if(v==(int)v)field[i]=(int)v;
        else{
        o=v;
        v=v-.5;
        if(o>v)field[i]=o;
        else if(o<=v)field[i]=o+1;
        }
    }
      for(i=1;i<=n;i++)printf("%d ",bat[i]);
      printf("\n\n");
       for(i=1;i<=n;i++)printf("%d ",bow[i]);
      printf("\n\n");
        for(i=1;i<=n;i++)printf("%d ",field[i]);
      printf("\n\n");


}
