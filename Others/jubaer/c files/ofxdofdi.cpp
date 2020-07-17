#include<stdio.h>
#include<string.h>

int main(){

char puzzle[60][60],c,command[1000];
int i,j,a,b,z,ck,y;

z=1;
while(1){

    ck=y=0;;
    for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            scanf("%c",&puzzle[i][j]);
            if(puzzle[0][0]=='Z') {ck=1; break;}
            if(puzzle[i][j]==' ') {a=i; b=j;}
        }
        if(ck==1) break;
    }
    if(ck==1) break;

    i=0;
    while(scanf("%c",&c)==1){
        if(c=='0') break;
        else if(c=='\n') continue;
        else{
            command[i]=c;
            i++;
        }
    }
    command[i]='\n';

    for(i=0; i<strlen(command); i++){
        if(command[i]=='A') {
            if(a-1<0) {y=1; break;}
            puzzle[a][b]=puzzle[a-1][b];
            puzzle[a-1][b]=' ';
            a=a-1; b=b;
        }
        else if(command[i]=='B') {
            if(a+1>4) {y=1; break;}
            puzzle[a][b]=puzzle[a+1][b];
            puzzle[a+1][b]=' ';
            a=a+1; b=b;
        }
        else if(command[i]=='R') {
            if(b+1>4) {y=1; break;}
            puzzle[a][b]=puzzle[a][b+1];
            puzzle[a][b+1]=' ';
            a=a; b=b+1;
        }
        else if(command[i]=='L') {
            if(b-1<0) {y=1; break;}
            puzzle[a][b]=puzzle[a][b-1];
            puzzle[a][b-1]=' ';
            a=a; b=b-1;
        }
        else if(command[i]>=65&&command[i]<=91)
            {
            y=1;
            break;
        }
    }

    if(y==1) printf("Puzzle #%d:\nThis puzzle has no final configuration.\n",z);
    else {
        printf("Puzzle #%d:\n",z);
        for(i=0; i<5; i++){
            for(j=0; j<5; j++) {printf("%c ",puzzle[i][j]);}
            printf("\n");
        }
    }
    z++;
    printf("\n");
    getchar();
    command[0]='\n';
}
return 0;
}
