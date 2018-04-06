#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,m,n,e,p,q,r,f,mk=0,hp,kp,g;
    char s[100][1000],ex[100];
    int ara[1000],pi[100];

    while(scanf("%d %d",&k,&e)==2)
    {
        mk++;
        getchar();
        f=k+e;
        for(i=0;i<f;i++)
            gets(s[i]);

        for(i=0;i<f;i++)
            ara[i]=0;

        for(i=k;i<f;i++)
        {
            l=strlen(s[i]);

            p=0;
            for(j=0;j<l;j++)
            {
                if((s[i][j]<65 || s[i][j]>90) && (s[i][j]<97 || s[i][j]>122)) {
                        ex[p]='\0';
                        p=0;
                    if(strlen(ex)>0)
                        for(q=0;q<k;q++)
                            if(strcmp(s[q],ex)==0){
                                ara[i]++;
                                ex[0]='\0';
                                break;}}

                else{
                ex[p]=tolower(s[i][j]);
                p++;}
            }
        }
        printf("Excuse Set #%d\n",mk);
        g=0;
        for(i=k;i<f;i++)
           if(ara[i]>g)
                g=ara[i];

        for(i=k;i<f;i++)
            if(ara[i]==g)
                printf("%s\n",s[i]);
            printf("\n");


    }
    return 0;
}
