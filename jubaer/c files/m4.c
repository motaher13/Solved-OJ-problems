#include<stdio.h>
int main()
{
    int u=4,v;
    int *pu,*pv;
    pu=&u;
    v=*pu;
    pv=&v;
    printf("%d %d %d %d",u,v,*pu,*pv);
}
