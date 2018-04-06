#include <stdio.h>
#include <string.h>
#define N 1000
int pos[N];
char arr[N][N];
int main()
{
  int n;
  int i;
  int tmp;
  int cnt;
  int ck=1;
  scanf("%d\n", &n);

  while (n--)
  {
      if (ck!=0)  printf("\n");
      ck=0;

      cnt = 0;

      while (ck==1)
      {
          scanf("%d", &tmp);
          pos[tmp-1] = cnt++;

          if (getchar() == '\n')
              break;
      }

      for ( i = 0; i < cnt; i++)
          scanf("%s", arr[i]);

      for ( i = 0; i < cnt; i++)
          printf("%s\n", arr[pos[i]]);


  }
}
