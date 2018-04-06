#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char s[10000],s1[10000],s2[1000];

    gets(s);
    l=strlen(s);

    for(i=0;s[i]!=0;i++)
    {
            j=i;
            do
            {
                i++;
                if(s[i]<65 || (s[i]>90 &&s[i]<97) || s[i]>122)
                {
                    if(s[j]=='a' ||s[j]=='A' ||s[j]=='e' ||s[j]=='E' ||s[j]=='i' ||s[j]=='I' ||s[j]=='o' ||s[j]=='O' ||s[j]=='u' ||s[j]=='U'){
                        for(k=0;j<i;j++,k++)
                            s2[k]=s[j];

                            s2[k]='a';
                            s2[k+1]='y';
                            s2[k+2]=s[i];}

                    else{
                        m=j;
                        j++;
                         for(k=0;j<i;j++,k++)
                         s2[k]=s[j];

                            s2[k]=s[m];
                            s2[k+1]='a';
                            s2[k+2]='y';
                            s2[k+3]=s[i];}

                            strcat(s1,s2);
                }
                if(i==l)
                    break;
            }while(s[i]!=' ');

    }
    printf("%s",s1);
}
