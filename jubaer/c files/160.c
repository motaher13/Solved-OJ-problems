#include <stdio.h>

int main()
{
     int ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i,n,t,q,j,r,max,k,u,d;
     int s[150];
    char st[100];
    for(j=0;j<25;j++){
            s[j]=0;
    }
     while(scanf("%d",&n)){
            if(n==1)printf("  1! = \n");
            else{

          if(n==0)break;
             for(j=0;j<25;j++){
            s[j]=0;
             }
    printf("%3d! =",n);
   max=0;
    for(i=n;i>0;i--){
    t=i;
    for(j=0;j<25;j++){
    r=ara[j];
    if(j>max)max=j;

    while(t%r==0){
    t=t/r;
    s[j]=s[j]+1;
    }
if(t==1)break;
    }


    }
    for(j=0;j<=max;j++){
            if(j==15)
                    printf("\n%6c",' ');

             printf("%3d",s[j]);
    }
    }
    printf("\n");
    }
    return 0;
}
