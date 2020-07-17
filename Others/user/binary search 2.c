#include<stdio.h>
int main()
{
    int i,j,k,l,n,a;
    int ara[]={1,2,3,4,6,7,8};
    int p=0,q=7;
    while(scanf("%d",&n)==1)
    {
        a=0,p=0;
        q=7;
        while(p<=q)
        {
            k=(p+q)/2;

            if(n==ara[k]){
                printf("%d\n",k);
                a=1;
                break;}
            else if(n<ara[k]){
                q=k-1;
                //printf("q=%d\n",q);
            }
            else if(n>ara[k]){
                p=k+1;
                //printf("p=%d\n",p);
            }
        }
            if(a==0)
                printf("no\n");
    }
}
