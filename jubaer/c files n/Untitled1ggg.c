#include <stdio.h>
int fact(int n)
{
    if(n==1)return 1;
      if(n&1){
           // return n;
        return fact(3*n+1)+1;
        }
        else {
            //return n;
        return fact(n/2)+1;

        }
}
int max(int n,int b)
{
   int max=0,count;
     while( n<=b){
   count=fact(n);

   if(max<count)max=count;


   n++;
     }
return max;
}
int main()
{
    int n,b;
   while( scanf("%d %d",&n,&b)!=EOF){
  printf( "%d",max(n,b));
   }


}


