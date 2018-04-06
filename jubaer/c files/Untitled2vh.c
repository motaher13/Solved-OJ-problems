#include <stdio.h>
int power(int a,int b){

    int mul=1,i;
    for(i=1;i<=b;i++){
        mul=mul*a;
    }
        return mul;


}
int main()
{
    int ans;
    ans=power(4,5);
    printf("%d",ans);

}
