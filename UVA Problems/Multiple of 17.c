#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m=0,c=0,sum=0;
    char n[10000],w[100],n1[10000];

     while(scanf("%s",n))
    {
        l=strlen(n);
        if(l==1 && n[0]-'0'==0)
        break;


    k=n[l-1]-'0';
    n[l-1]='\0';
    l=l-1;
    k=5*k;

    w[0]=(k/10)+48;
    w[1]=(k%10)+48;

    for(j=0;j<=l-3;j++)
        n1[j]='0';
    n1[l-2]=w[0];
    n1[l-1]=w[1];



    if(l<3)
    {
        for(j=0;j<l;j++)
            m=m+n[j]-48;

        if(m>k)
        {
            m=m-k;
            n[0]=(m/10)+48;
            n[1]=(m%10)+48;
        }
        else
            {
            m=k-m;
            n[0]=(m/10)+48;
            n[1]=(m%10)+48;
            }
    }

    else{
    for(j=l-1;j>=0;j--)
    {
        if(n[j]<n1[j])
        {
            n[j]=(n[j]-48+10-n1[j]+48)+48;
            n1[j-1]=n1[j-1]+1;
        }

        else
            n[j]=n[j]-n1[j]+48;
    }
    }
    l=strlen(n);



    for(j=0;j<l;j++)
    {
        sum=sum*10+(n[j]-'0');
        sum=sum%17;
    }

    if(sum==0)
        printf("1\n");
    else
    {
        printf("0\n");
    }
     sum=0,m=0;

    }
    return 0;
}
