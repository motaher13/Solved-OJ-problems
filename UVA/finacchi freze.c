#include<stdio.h>
#include<string.h>
char s[10000][10000];

int main()
{
    int i,j,k,l,m,n,a,b,c,d,l1,l2,p,q;
    char w[10000];
    strcpy(s[0],"1");
    strcpy(s[1],"1");


        for(q=2;q<=5050;q++)
        {
            l1=strlen(s[q-2]);
            l2=strlen(s[q-1]);

            c=0,k=0;
            for(i=l1-1,j=l2-1; ;i--,j--)
            {
                a=s[q-2][i]-48;
                b=s[q-1][j]-48;
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
                s[q][i]=w[j];
                s[q][i]='\0';

        }
    while(scanf("%d",&n)==1){
        if(n==0)
            printf("The Fibonacci number for %d is 0\n",n);
        else
            printf("The Fibonacci number for %d is %s\n",n,s[n-1]);}
    return 0;
}

