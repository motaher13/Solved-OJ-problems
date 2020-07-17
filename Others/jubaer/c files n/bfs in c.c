/*C Program to implement Breadth First Search (BFS)
C program to implement Breadth First Search(BFS). Breadth First Search is an algorithm used to search the Tree or Graph. BFS search starts from root node then traversal into next level of graph or tree and continues, if item found it stops other wise it continues. The disadvantage of BFS is it requires more memory compare to Depth First Search(DFS). Read more about C Programming Language .
/***********************************************************
* You can use all the programs on  www.c-program-example.com
* for personal and learning purposes. For permissions to use the
* programs for commercial purposes,
* contact info@c-program-example.com
* To find more C programs, do visit www.c-program-example.com
* and browse!
*
*                      Happy Coding
***********************************************************/

#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
 for(i=1;i<=n;i++)
  if(a[v][i] && !visited[i])
   q[++r]=i;
 if(f<=r)
 {
  visited[q[f]]=1;
  bfs(q[f++]);
 }
}
int main()
{
 int v;
 clrscr();
 printf("\n Enter the number of vertices:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  q[i]=0;
  visited[i]=0;
 }
 printf("\n Enter graph data in matrix form:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
 printf("\n Enter the starting vertex:");
 scanf("%d",&v);
 bfs(v);
 printf("\n The node which are reachable are:\n");
 for(i=1;i<=n;i++)
  if(visited[i])
   printf("%d\t",i);
  else
   printf("\n Bfs is not possible");
 //getch();
}

/*Read more Similar C Programs
Data Structures
Depth First Search(BFS)
Learn C Programming

You can easily select the code by double clicking on the code area above.

To get regular updates on new C programs, you can

You can discuss these programs on our Facebook Page. Start a discussion right now,*/
