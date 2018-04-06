#include<stdio.h>
int main()
{
    int i,j,l,l1,l2,m,o;
    char n[100],n1[100],s[110],w[100],k,c='\0';
    gets(n);
    gets(n1);
    l=strlen(n);
    l1=strlen(n1);
    if(l1>l)
    {
        strcpy(w,n);
        strcpy(n,n1);
        strcpy(n1,w);
        l2=l;
        l=l1;
        l1=l2;
    }

    for(j=0;j<l-l1;j++)
        w[j]='0';
    for(m=j,o=0;o<l1;m++,o++)
        w[m]=n1[o];
    strcpy(n1,w);
    n1[l]='\0';

    //printf("%s\n",n1);
    //l=strlen(n1);
    for(j=l-1;j>=0;j--)
    {
        k=n[j]+n1[j]+c-'0';
        //c='0';
        s[j+1]=((k-'0')%10)+'0';
        c=((k-'0')/10);
    }
    s[0]=c+'0';
    s[l+1]='\0';
    printf("%s",s);

}

