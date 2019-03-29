#include<stdio.h>
#include<string.h>
char s[5000000],w[5000000];
int main()
{
    long long i,j,k,l,m,n,l1,l2;
    while(gets(s))
    {
        l1=strlen(s);
        w[0]='\0';
        k=0;
        for(i=0;i<=l1;i++)
        {
            if(s[i]==' ' || i==l1){
                w[k]='\0';
                if(strlen(w)>0){
                for(j=k-1;j>=0;j--)
                printf("%c",w[j]);
                k=0;}
                printf("%c",s[i]);
                }

            else{
                w[k]=s[i];
                k++;}
        }
        printf("\n");
    }
    return 0;
}
