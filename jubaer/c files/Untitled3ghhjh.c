#include <stdio.h>
int add(int a,int b);
int abs(int a,int b);
int main()
{
    int a,b;
  scanf("%d%d",&a,&b);
   printf("%d",abs(a,b));

    return 0;
}
int add(int a,int b)

{
  return a+b;

}
int abs(int a,int b){
    int ad=add(a,b);
    if(ad<0)
        return -ad;
    else return ad;

}

