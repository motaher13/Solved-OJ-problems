#include<stdio.h>
#include<string.h>
char s[5000000],w[5000000];
int main()
{
    long long i,j,k,l,m,n,p,q,a;

    while(gets(s))
    {
        l=strlen(s);
        k=0;
        for(j=0;j<l;j++)
        {
            if((s[j]>=65&&s[j]<=90) ||(s[j]>=97&& s[j]<=122))
            {
                if(s[j]=='a' ||s[j]=='A' ||s[j]=='e' ||s[j]=='E' ||s[j]=='i' ||s[j]=='I' ||s[j]=='o' ||s[j]=='O' ||s[j]=='u' ||s[j]=='U'){
                    while((s[j]>=65&&s[j]<=90) ||(s[j]>=97&& s[j]<=122))
                    {
                        w[k]=s[j];
                        j++,k++;
                    }
                    w[k]='a';
                    k++;
                    w[k]='y';
                    k++;}
                else
                {
                    a=j;
                    j++;
                    while((s[j]>=65&&s[j]<=90) ||(s[j]>=97&& s[j]<=122))
                    {
                        w[k]=s[j];
                        j++,k++;
                    }
                    w[k]=s[a];
                    k++;
                    w[k]='a';
                    k++;
                    w[k]='y';
                    k++;}

                }
                else
                while(s[j]<65 || (s[j]>90 &&s[j]<97) || s[j]>122){
                        w[k]=s[j];
                        k++,j++;}
                j--;
            }
            w[k]='\0';
            printf("%s\n",w);

    }
    return 0;
}





