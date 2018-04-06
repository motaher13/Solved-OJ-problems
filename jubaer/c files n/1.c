#include <stdio.h>
#include <math.h>
int main()
{
    int p,i,j,n,t,k,r,s,l,q;
    int ara[10000];
    float d;
  while(scanf("%d",&p)){
            if(p==0)break;
    for(i=0;i<p;i++){
    scanf("%d",&ara[i]);
    }
     l=0;
    s=0;
      for(i=0;i<p-1;i++){
     for(j=i+1;j<p;j++){
            l++;
     n=ara[i];
     t=ara[j];
     if(n>t){
        r=n;
        n=t;
        t=r;
     }

     if(t%n!=0){
             if(n%2==0)q=(n/2);
     else q=(n/2)+1;
     for(k=2;k<=q+1;k++){

         if(n%k==0&&t%k==0)break;
        else if(k==q+1)s++;
     }
     }
     }
     }
     if(s==0)printf("No estimate for this data set.\n");
     else{
    d=(float)6/s;
     printf("%0.6f\n",(float)sqrt(d*l));
     }
  }
    return 0;
}
