#include <stdio.h>
int visited[1000];
int allow[1000];
int ara[1000];
int main()
{
    int stu,dollar,depo,current,i,j,k,l,limit,roll,d,ck;
    while(scanf("%d%d",&stu,&limit)){
            if(stu==0&&limit==0)break;
    for(i=1;i<=stu;i++){visited[i]=0;
    allow[i]=0;
    }
    current=1;
    depo=0;
   roll=1;
   j=0;
   ck=0;
    while(1){

        if(allow[roll]==0){
               if(ck!=1)depo=depo+current;
                d=visited[roll];
        visited[roll]=visited[roll]+depo;
        if(visited[roll]>=40){
            depo=0;
        depo=visited[roll]-40;

            ara[j]=roll;
            allow[roll]=1;
            j++;
            if(j==stu)break;

        }
        else depo=0;
         if(depo!=0)ck=1;
            else ck=0;
        if(ck!=1)current++;
        if(current>limit)current=1;
        }
        roll++;
        if(roll==stu+1)roll=1;

    }
  for(i=0;i<j;i++)printf("%3d",ara[i]);
  printf("\n");
    }
    return 0;
}
