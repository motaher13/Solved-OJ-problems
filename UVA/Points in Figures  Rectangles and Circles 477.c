#include<stdio.h>
#include<math.h>
double p[1000000][4];
int main()
{
    int i,j,k,l,b;
    char ch[20];
    double ara[20][8],g;
    i=0;
    while(1)
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='*')
            break;
        else if(ch[i]=='r')
            scanf("%lf %lf %lf %lf",&ara[i][0],&ara[i][1],&ara[i][2],&ara[i][3]);
        else if(ch[i]=='c')
            scanf("%lf %lf %lf",&ara[i][0],&ara[i][1],&ara[i][2]);
            getchar();
            i++;
    }
    j=0;
    while(scanf("%lf %lf",&p[j][0],&p[j][1]))
    {
        if(p[j][0]==9999.9 && p[j][1]==9999.9)
            break;
        else
            j++;
    }
    for(k=0;k<j;k++)
    {
        b=0;
        for(l=0;l<i;l++)
        {
            if(ch[l]=='r')
                if(p[k][0]>ara[l][0] && p[k][0]<ara[l][2] && p[k][1]>ara[l][3] && p[k][1]<ara[l][1]){
                    printf("Point %d is contained in figure %d\n",k+1,l+1);
                    b=1;}
            if(ch[l]=='c'){
                    g=(p[k][0]-ara[l][0])*(p[k][0]-ara[l][0])+(p[k][1]-ara[l][1])*(p[k][1]-ara[l][1]);
                if(sqrt(g)<ara[l][2]){
                    printf("Point %d is contained in figure %d\n",k+1,l+1);
                    b=1;}}
        }
        if(b==0)
            printf("Point %d is not contained in any figure\n",k+1);
    }

    return 0;
}





