#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t=0;
    char s[100],o[1000][10];
    while(scanf("%s",s)==1)
    {
        t++;
        j=0,k=0;
        l=strlen(s);
        for(i=l-1;i>=0;i--)
        {
            j++;
            if(j==1 && (s[i-1]=='0' || i-1<0)){
                o[k][0]=s[i];
                k++,j++;}
            else if(j==1 && s[i-1]!='0'){
                o[k][1]=s[i];
                o[k][0]=s[i-1];
                k++,i--,j++;}
            if(j==3 && s[i]!='0' && (s[i-1]=='0' || i-1<0)){
                strcpy(o[k],"shata");
                k++;
                o[k][0]=s[i];
                i--;}
            else if(j==3 && s[i-1]!='0'){
                strcpy(o[k],"shata");
                k++;
                o[k][1]=s[i];
                o[k][0]=s[i-1];
                k++,j++,i--;}


        }
        for(i=k-1;i>=0;i--)
            printf("%s ",o[i]);
        printf("\n");
    }
}
