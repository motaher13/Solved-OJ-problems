#include <stdio.h>
#include <string.h>
int main()
{
    double ara[15],ara2[15],ara3[15],ara4[15],a,b;
    int i=1,j,k,l,ck;
    char ch[67];
    while(1){
        scanf("%s",ch);
        if(strcmp(ch,"*")==0)break;
        scanf("%lf%lf%lf%lf",&ara[i],&ara2[i],&ara3[i],&ara4[i]);
        i++;

    }
    j=1;
   while(scanf("%lf%lf",&a,&b)){
       if(a==9999.9&&b==9999.9)break;
        ck=0;
        for(k=1;k<i;k++){
            if(a<ara3[k]&&a>ara[k]&&b>ara4[k]&&b<ara2[k]){
                ck=1;
                printf("Point %d is contained in figure %d\n",j,k);
            }
        }
   if(ck==0)printf("Point %d is not contained in any figure\n",j);
      j++;
   }
   return 0;
}
