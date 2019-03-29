#include <stdio.h>
int main()
{
   long long a,b;
   int n;
  while(1){
      printf("n=");
        scanf("%d",&n);
        if(n>=15){
            break;
        }
        else {
    while(n--){
    scanf("%lld%lld",&a,&b);
    if((-1*a)>=1000000001||a>=1000000001||(-1*b)>=1000000001||b>=1000000001){
            printf("wrong\n");
       break;
    }
  else if(a>b){
    printf(">\n");
    }
    else if(a<b){
    printf("<\n");
    }
    else {
    printf("=\n");
    }

    }
  }
  }
    return 0;

}
