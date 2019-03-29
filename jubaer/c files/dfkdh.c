#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 char str[50][30],str2[100][90],rev[100];
int main()
{

    int i,j,k,l,m,n,kk,ck,p,q,t,s,check,count,visit[100],x,max,z=0;
   while(scanf("%d%d",&n,&m)==2){
       z++;
    for(i=0;i<n;i++){
        scanf("%s",str[i]);

    }
    getchar();
    for(i=0;i<m;i++){
        gets(str2[i]);
        visit[i]=0;
    }
    x=0;
    max=0;
    for(i=0;i<m;i++){
            count=0;
            k=0,ck=0,kk=0;
        for(j=0;j<=strlen(str2[i]);j++){
                x=(int)str2[i][j];
                if(kk==1&&(str2[i][j]==' '||str2[i][j]=='.'||str2[i][j]==','||str2[i][j]=='!'||str2[i][j]=='?'||str2[i][j]=='&'||str2[i][j]=='\0'||str2[i][j]=='"'||str2[i][j]=='@'||str2[i][j]=='#'||(x>=48&&x<=56))){
                    rev[k]='\0';
                    kk=0;
                    ck=0;
                    k=0;
                    check=1;
                    for(p=0;p<n;p++){
                        if(strlen(str[p])==strlen(rev)){
                            for(q=0;q<strlen(rev);q++){
                                if(rev[q]!=str[p][q])break;
                            }
                            if(q==strlen(rev)){
                                    count++;
                                break;
                            }
                        }
                    }
                }
            if(str2[i][j]!=' '&&str2[i][j]!='.'&&str2[i][j]!=','&&str2[i][j]!='!'&&str2[i][j]!='?'&&str2[i][j]!='&'&&str2[i][j]!='"'&&str2[i][j]!='@'&&str2[i][j]!='#'&&(x>=65))ck=1;
    if(ck==1){
        rev[k]=tolower(str2[i][j]);
        k++;
        kk=1;
    }
        }
visit[i]=count;

if(max<count)max=count;
    }
     printf("Excuse Set #%d\n",z);
    for(i=0;i<m;i++){
        if(visit[i]==max)printf("%s\n",str2[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        strcpy(str2[i],"\0");
    }
    for(i=0;i<m;i++){
        strcpy(str[i],"\0");
    }
   }
   return 0;
}
