#include <stdio.h>
#include <string.h>
int ara[10000],visited[100][100];
char str[100][100],str2[10000];
int count,n,m;
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
void def(char mark,int p,int q){
    visited[p][q]=1;
    count++;
    int v,w,i;
    for(i=0;i<4;i++){
        v=x[i]+p;
        w=y[i]+q;
        if(str[v][w]==mark&&visited[v][w]==0&&v>=0&&v<n&&w>=0&&w<m){
            def(mark,v,w);
        }
    }
}
int main()
{

    int i,j,k,l,t,r=1;
    char ch;
    while(scanf("%d%d",&n,&m)){
            if(n==0&&m==0)break;
             for(i=0;i<n;i++)
        for(j=0;j<m;j++)visited[i][j]=0;
    l=0;
    for(i=0;i<n;i++)scanf("%s",str[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]!='.'&&visited[i][j]==0){
                    count=0;
                def(str[i][j],i,j);
                str2[l]=str[i][j];
                ara[l]=count;
                l++;
            }
        }
    }
    str2[l]='\0';
    printf("Problem %d:\n",r++);
    for(i=0;i<l;i++){
     for(j=i+1;j<l;j++){
        if(ara[i]<ara[j]){
            t=ara[i];
            ara[i]=ara[j];
            ara[j]=t;
            ch=str2[i];
            str2[i]=str2[j];
            str2[j]=ch;

        }
       else if(ara[i]==ara[j]){
            if((int)str2[i]>(int)str2[j]){
            ch=str2[i];
            str2[i]=str2[j];
            str2[j]=ch;
            }
        }

     }
     printf("%c %d",str2[i],ara[i]);
     printf("\n");
    }
    strcpy(str2,"\0");
    }
    return 0;
}
