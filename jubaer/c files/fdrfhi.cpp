#include <stdio.h>
#include <string.h>
int count;
char str[500][500],word[100],w,f,v,ck;
void func(int p,int q){
int i=p,j=q;
count++;
printf("%c %d %d\n",str[i][j],count,strlen(word));
if(count>=strlen(word))return;
ck=1;
str[i][j]='6';
 if(str[i-1][j]==word[count]) {
        func(i-1,j);
        ck=0;
 }
     if(str[i-1][j+1]==word[count]){
            func(i-1,j+1);
            ck=0;
     }
      if(str[i-1][j-1]==word[count]){
            func(i-1,j-1);
            ck=0;
      }
      if(str[i+1][j]==word[count]){
            func(i+1,j);
            ck=0;
      }
       if(str[i][j+1]==word[count]){
                func(i,j+1);
                ck=0;
       }
   if(str[i][j-1]==word[count]){
        func(i,j-1);
        ck=0;
   }
      if(str[i+1][j+1]==word[count]) {
            func(i+1,j+1);
            ck=0;
      }
      if(str[i+1][j-1]==word[count]){
            func(i+1,j-1);
            ck=0;
      }
      if(count>=strlen(word))return;
      if(ck==1){
       // str[i][j]=' ';
        count--;
        return;
      //  func(w,v);
      }
    str[i][j]='0';


}
int main()
{

    int i,j,k,l,r,u;
    while(1){
            if(k==0&&r==0)break;
    for(i=0;i<4;i++){
        scanf("%s",str[i]);

    }
    scanf("%s",word);
    count=0;
    l=0;
    //word[0]
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(str[i][j]==word[0]){
                    l++;
      w=i;
      v=j;
                func(i,j);
            }
        }

    }

  printf("%d %d\n",l,count);
    }
    return 0;
}
