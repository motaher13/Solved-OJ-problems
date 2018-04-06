#include <stdio.h>
int main()
{
    int i,ck,n,lok,array[90],key,j=0;
    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
      scanf("%d",&key);

      for(i=0;i<n;i++){
      if(array[i]==key){


      break;
      }
      }
      printf("case %d:",j);
      if(lok==0) printf("no");
      else             printf("%d",i+1);



    }



    return 0;
}
