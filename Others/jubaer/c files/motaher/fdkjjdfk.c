#include<stdio.h>
int main()
{
    int i,j,k,l,r,c,n;
    char m;
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        scanf("%c",&m);
        getchar();
        scanf("%d%d",&r,&c);
        if(r<c)
        {
            r=r^c;
            c=c^r;
            r=r^c;
        }

        if(m=='K');
            printf("%d",(r*c)/4);
        if(m=='Q')
            printf("%d",c);
        if(m=='k')
            printf("%d",(r*c)/2);
        if(m=='r')
            printf("%d",c);
            printf("\n");
    }
    return 0;
}
