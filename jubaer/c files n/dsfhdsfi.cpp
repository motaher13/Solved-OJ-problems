#include<bits/stdc++.h>
using namespace std;

int main()
{
    int CB[10][10], i, j, k, sx, sy, ex, ey, x, y;
    char s, e;
    int kx[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
    int ky[] = { 2, -2, 2, -2, 1, -1, 1, -1 };

    while(scanf("%c%d %c%d", &s, &sy, &e, &ey)==4)
    {
        sx=s-'a';
        ex=e-'a';
        sy=sy-1;
        ey=ey-1;

        CB[sx][sy]=0;

        queue< pair<int, int> >Q;
        Q.push(make_pair(sx, sy));
        while(!Q.empty())
        {
            pair<int, int> p=Q.front();
            x=p.first, y=p.second;
            if(x==ex && y==ey) break;
            Q.pop();
            for(i=0; i<8; i++)
            {
                if(x+kx[i]>=0 && x+kx[i]<8 && y+ky[i]>=0 && y+ky[i]<8)
                {
                    Q.push(make_pair(x+kx[i], y+ky[i]));
                    CB[x+kx[i]][y+ky[i]]=CB[x][y]+1;
                }
            }
        }
        printf("To get from %c%d to %c%d takes %d knight moves.\n", s, sy+1, e, ey+1, CB[ex][ey]);
        getchar();
    }

    return 0;


    }
