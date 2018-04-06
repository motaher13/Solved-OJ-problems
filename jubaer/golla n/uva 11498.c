#include <stdio.h>
int main()
{
    int t,n,m,x,y,i,ara1[100000],ara2[100000];
    while(scanf("%d",&t)){
            if(t==0)break;
            scanf("%d%d",&n,&m);
    for(i=0;i<t;i++){
    scanf("%d%d",&ara1[i],&ara2[i]);
    }
    for(i=0;i<t;i++){
    if(ara1[i]==n||ara2[i]==m)printf("divisa\n");
    else if(ara1[i]>n&&ara2[i]>m)printf("NE\n");
    else if(ara1[i]<n&&ara2[i]>m)printf("NO\n");
    else if(ara1[i]<n&&ara2[i]<m)printf("SO\n");
    else if(ara1[i]>n&&ara2[i]<m)printf("SE\n");
    }
    }
    return 0;
}
