#include<bits/stdc++.h>
using namespace std;

char str[999999];
char chk[10000][4];

int main()
{
    freopen("a.txt","w",stdout);
    int i,j,k,l,n,t,m,w,b;
    double sum,run,q,s;
    scanf("%d",&n);
    double ara[200]={0};
    ara['q']=ara['w']=ara['e']=ara['r']=ara['t']=0.2;
    ara['y']=ara['u']=ara['i']=ara['o']=ara['p']=0.1;

    while(n--)
    {
        scanf("%d",&m);
        getchar();
        scanf("%[^\n]s",&str);
        scanf("%lf",&q);
        printf("%s\n\n",str);

        l=strlen(str);
        sum=0;

        i=0;
        k=0;
        while(i<l)
        {
            for(j=i;j<l && str[j]!=' ';j++)
            {}

            chk[k][0]=i;
            chk[k][1]=j-i;
            chk[k][2]=0;
            i=j+1;
            k++;
        }

        for(i=0;i<m;i++)
        {
            if(chk[i][2]==1)
                continue;

            s=ara[str[chk[i][0]]];
            run=s;
            for(j=chk[i][0]+1;j<chk[i][0]+chk[i][1];j++)
            {
                if(ara[str[j]]==ara[str[j-1]])
                    run=run*2,s+=run;
                else
                    run=ara[str[j]],s+=run;
//                printf("%lf ",s);
            }
//            printf("\n");
            sum+=s;
            for(k=i+1;k<m;k++)
            {
                if(chk[k][2]==1)
                    continue;
                else if(chk[k][1]!=chk[i][1])
                    continue;
                else
                {
                    b=0;
                    for(j=0;j<chk[k][1];j++)
                    {
                        if(str[chk[i][0]+j]!=str[chk[k][0]+j])
                            b=1;
                    }

                    if(b==0)
                    {
                        chk[k][2]=1;
                        sum+=(s/2);
                    }

                }
            }
        }

        sum+=(m-1)*0.3;

        if(sum<q)
            printf("WORK HARDER, %lf\n",sum);
        else if(sum>q)
            printf("GREAT JOB, %lf\n",sum);

        else
            printf("GOOD, %lf\n",sum);
    }
    fclose(stdin);
    return 0;
}
