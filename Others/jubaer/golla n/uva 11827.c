#include <stdio.h>
int main()
{
    int i,ara[100000],max=0,k,j,a,b,t,test;
    scanf("%d",&test);
    while(test--){

      for(i=0;i<4;i++){
        scanf("%d",&ara[i]);
      }
    max=0;
    for(k=0;k<i-1;k++){
        for(j=k+1;j<i;j++){
            a=ara[k];
            b=ara[j];

            while (b != 0) {
   t=b;
   b=a%b;
   a=t;
  }

            if(max<a)max=a;
            }


    }
    printf("%d\n",max);
    }
    return 0;
}
