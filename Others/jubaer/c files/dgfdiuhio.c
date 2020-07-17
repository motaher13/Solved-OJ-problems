#include<stdio.h>
#include<string.h>

int main()
{

    char puzzle[60][60],c,command[1000],r=0;
    int i,j,a,b,z,ck,y,p;

    z=1;
    while(1)
    {

        ck=y=0;;
        for(i=0; i<5; i++)
        {
            for(j=0; j<6; j++)
            {
                scanf("%c",&puzzle[i][j]);
                if(puzzle[0][0]=='Z')
                {
                    ck=1;
                    break;
                }
                if(puzzle[i][j]==' ')
                {
                    a=i;
                    b=j;
                }
            }
            if(ck==1) break;
        }
        if(ck==1) break;

        i=0;
        if(r==1)printf("\n");
         printf("Puzzle #%d:\n",z);
        while(scanf("%c",&c)==1)
        {
            if(c=='0') break;
            else if(c=='\n') continue;
            else
            {
                command[i]=c;
                i++;
            }
        }
        command[i]='\n';

        for(i=0; i<strlen(command); i++)
        {
            if(command[i]=='A')
            {
                if(a-1<0)
                {
                    y=1;
                    break;
                }
                puzzle[a][b]=puzzle[a-1][b];
                puzzle[a-1][b]=' ';
                a=a-1;
                b=b;
            }
            else if(command[i]=='B')
            {
                if(a+1>4)
                {
                    y=1;
                    break;
                }
                puzzle[a][b]=puzzle[a+1][b];
                puzzle[a+1][b]=' ';
                a=a+1;
                b=b;
            }
            else if(command[i]=='R')
            {
                if(b+1>4)
                {
                    y=1;
                    break;
                }
                puzzle[a][b]=puzzle[a][b+1];
                puzzle[a][b+1]=' ';
                a=a;
                b=b+1;
            }
            else if(command[i]=='L')
            {
                if(b-1<0)
                {
                    y=1;
                    break;
                }
                puzzle[a][b]=puzzle[a][b-1];
                puzzle[a][b-1]=' ';
                a=a;
                b=b-1;
            }
            else if(command[i]>=65&&command[i]<=91)
            {
                y=1;
                break;
            }
        }

        // printf("Puzzle #%d:",z);
        if(y==1) printf("This puzzle has no final configuration.\n");
        else
        {
            for(i=0; i<5; i++)
            {
                p=0;
                for(j=0; j<5; j++)
                {
                    printf("%c",puzzle[i][j]);
                    if(p<4)printf(" ");
                    if(p==4)break;
                    p++;
                }
                printf("\n");

            }
        }
       // printf("\n");
        z++;
        getchar();
        command[0]='\n';
        r=1;
    }
    return 0;
}
