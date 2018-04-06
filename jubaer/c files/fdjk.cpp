#include <stdio.h>
#include <sstream>
using namespace std;
int visited[100][100];
char str[100][100];
int x[]={0,0,1,-1,1,1,-1,-1};
int y[]={1,-1,0,0,1,-1,1,-1};
int count;
void def(int p,int q){
visited[p][q]=1;
int i,v,w;
count++;
for(i=0;i<8;i++){

    int v=x[i]+p;
    int w=y[i]+q;
    if(visited[v][w]==0&&str[v][w]=='W'){
        def(v,w);
    }
}
}
int main()
{
    int i,j,k,l,m,n;
    for(i=0;i<9;i++)gets(str[i]);
    count=0;
    def(6,4);
    printf("%d",count);

}
