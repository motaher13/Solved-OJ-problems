#include <stdio.h>
int main()
{
    char str[20][20],str2[100][71],rev[100];
    int i,j,k,l,m,n,kk,ck,p,q,t,s,check,count,visit[100],x,max;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    getchar();
    for(i=0;i<m;i++){
        gets(str2[i]);
    }
    x=0;
    max=0;
    for(i=0;i<m;i++){
            count=0;
            k=0,ck=0,kk=0;
        for(j=0;j<=strlen(str2[i]);j++){
                if(kk==1&&(str2[i][j]==' '||str2[i][j]=='.'||str2[i][j]==','||str2[i][j]=='!'||str2[i][j]=='?'||str2[i][j]=='&'||str2[i][j]=='\0')){
                    rev[k]='\0';
                    kk=0;
                    ck=0;
                    k=0;
                    check=1;
                 //   printf("%s\n",rev);
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
            if(str2[i][j]!=' '&&str2[i][j]!='.'&&str2[i][j]!=','&&str2[i][j]!='!'&&str2[i][j]!='?'&&str2[i][j]!='&')ck=1;
    if(ck==1){
        rev[k]=tolower(str2[i][j]);
        k++;
        kk=1;
    }

        }
visit[i]=count;

if(max<count)max=count;
   //printf("%d\n",count);
    }
    for(i=0;i<m;i++){
        if(visit[i]==max)printf("%s\n",str2[i]);
    }
}
