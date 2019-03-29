#include <stdio.h>
int main()
{
    int ara[10000],bat[10000],bow[10000],field[10000],t;
    double v,w,g;
    int i,j,k,l,n,u,ric[10000],soe[10000],max[10000],r,m,cou,h,o,a,b,c;
    cou=1;
    while(scanf("%d",&n)){
            if(n==0)break;
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

        ric[i]=i;
        soe[i]=i;
        max[i]=i;
    }
    scanf("%d%d%d",&m,&u,&r);

    for(i=1;i<n;i++){

        for(j=i+1;j<=n;j++){
            if(bat[i]<bat[j]){

                t=bat[i];
                bat[i]=bat[j];
                bat[j]=t;
                t=ric[i];
                ric[i]=ric[j];
                ric[j]=t;
            }
        }
     if(i<=m)sum=sum+bat[i];
    }

   for(i=1;i<m;i++){

        for(j=i+1;j<=m;j++){
            if(ric[i]>ric[j]){
                t=ric[i];
                ric[i]=ric[j];
                ric[j]=t;
            }
        }

    }
  for(i=1;i<=m;i++){
    field[ric[i]]=-1;
    bow[ric[i]]=-1;
  }
  for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(field[i]<field[j]){

                t=field[i];
                field[i]=field[j];
                field[j]=t;
                t=max[i];
                max[i]=max[j];
                max[j]=t;
            }
        }
     if(i<=r)sum=sum+field[i];
    }
   for(i=1;i<r;i++){
        for(j=i+1;j<=r;j++){
            if(max[i]>max[j]){
                t=max[i];
                max[i]=max[j];
                max[j]=t;
            }
        }

    }
  for(i=1;i<=r;i++){
    bat[max[i]]=-1;
    bow[max[i]]=-1;
  }

    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++){
            if(bow[i]<bow[j]){

                t=bow[i];
                bow[i]=bow[j];
                bow[j]=t;
                t=soe[i];
                soe[i]=soe[j];
                soe[j]=t;
            }
        }
     if(i<=u)sum=sum+bow[i];
    }

   for(i=1;i<u;i++){

        for(j=i+1;j<=u;j++){
            if(soe[i]>soe[j]){
                t=soe[i];
                soe[i]=soe[j];
                soe[j]=t;
            }
        }
    }
    if(cou>0)printf("\n");
    printf("Team #%d",cou);
  printf("\nMaximum Effective Score = %.lf",sum);
  printf("\nBatsmen : ");
   for(i=1;i<=m;i++)printf("%d ",ric[i]);
   printf("\nBowlers : ");
    for(i=1;i<=u;i++)printf("%d ",soe[i]);
    printf("\nAll-rounders : ");
 for(i=1;i<=r;i++)printf("%d ",max[i]);
 printf("\n");
 cou++;
    }
return 0;
}
