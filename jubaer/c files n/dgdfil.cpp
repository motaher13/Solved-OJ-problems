#include <stdio.h>
#include <stdlib.h>



void dfs(int i,int j,char** map,char c,int r)
{

if(i>-1&&j>-1&&i<r&&map[i][j]&&map[i][j]!=c&&map[i][j]!='X')
{
	map[i][j]=c;
	dfs(i,j+1,map,c,r);
	dfs(i-1,j,map,c,r);
	dfs(i+1,j,map,c,r);
	dfs(i,j-1,map,c,r);

}
}

int main()
{
int r,c,i,j,top,tt;
char** map;
char cc;
map=(char**)malloc(105*sizeof(char*));
top=0;
for(i=0;i<105;i++)
{
    map[i] = (char*) malloc(105);
}

while(gets(map[top]))
{

	if(map[top++][0]=='_')
	{
		for(i=0;i<top-1;i++)
			for(j=0;map[i][j];j++)
			{
				if(map[i][j]!='X'&&map[i][j]!=' ')
				{
					cc=map[i][j];
					map[i][j]=' ';
					dfs(i,j,map,cc,top-1);
				}
			}
		for(i=0;i<top;i++)
			puts(map[i]);
			top=0;
	}
}
  return 0;
}
