#include <stdio.h>
int r=4,c;
int add(int a,int b){

    int res;
    res=a+b;
    c=b;
    return res;

}
int abs(a){
    int res;
    res=a<0?-a:a;
    c=a;
}

int main()
{
    printf("%d\t",add(4,7));
    printf("%d\n",abs(6));
    printf("%d %d %d",r*7,c,c);
}
