#include <stdio.h>
int main()
{
    char ch;
    int n,a,b,r,t,i,d;

    scanf("%d",&n);
    d=n*2;
    while(d--){
    ch=getchar();
    scanf("%d%d",&a,&b);
    if(ch=='k'){
    if((a*b)%2!=0){
            printf("%d\n",((a*b)/2)+1);
    }
    else {
            printf("%d\n",(a*b)/2);
    }
    }
     if(ch=='Q'){
    if(a<=b){
            printf("%d\n",a);
    }
    else {
            printf("%d\n",b);
    }
    }
    else if(ch=='r'){
            printf("%d\n",a);
    }
   else if(ch=='K'){
    if(a%2!=0)r=(a/2)+1;
    else r=a/2;
    if(b%2!=0)t=(b/2)+1;
  else t=b/2;
  printf("%d\n",r*t);
  }

    }
return 0;
}
