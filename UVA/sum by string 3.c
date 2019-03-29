#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,c,d,p,l1,l2;
    char s1[1000],s2[1000],s[1000],w[1000];
    while(scanf("%s %s",s1,s2)==2)
    {
        l1=strlen(s1);
        l2=strlen(s2);

        c=0,k=0;
        for(i=l1-1,j=l2-1; ;i--,j--)
        {
            a=s1[i]-48;
            b=s2[j]-48;
            if(i<0)
                a=0;
            if(j<0)
                b=0;
            if(i<0 && j<0 && c==0)
                break;


            p=a+b+c;
            w[k]=p%10+48;
            k++;
            c=p/10;

            if(i<0 && j<0)
                break;
        }
        for(i=0,j=k-1;j>=0;j--,i++)
            s[i]=w[j];
            s[i]='\0';

        printf("%s\n",s);
    }
    return 0;
}
