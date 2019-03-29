#include <stdio.h>
int main()
{
    long long i,j,k,l,p,q,r,ara[100000],s,a,b,c,d,ck;
    ara[0]=1;
    p=0,q=0,r=0,s=0;
    for(i=0;i<5842;){
            ck=1;
        a=ara[p]*2;
        b=ara[q]*3;
        c=ara[r]*5;
        d=ara[s]*7;
        if(a<b&&a<c&&a<d){
i++;
            p++;
            ara[i]=a;
        }
         if(b<a&&b<c&&b<d){
            i++;
            q++;
            ara[i]=b;
        }
         if(c<b&&c<a&&c<d){
i++;
            r++;
            ara[i]=c;
        }
        if(d<b&&d<a&&d<c){
        i++;
            s++;
            ara[i]=d;
        }
      else  if(a==b){
            q++;


        }
 else  if(a==c){
        r++;

   }
 else  if(a==d){
        s++;

   }
   else if(b==c){
            r++;

    }
 else  if(b==d){
        s++;

   }
  else if(c==d){

        s++;
   }

    }
  while(scanf("%lld",&j)){
        if(j==0)break;
     printf("The %lld",j);
    q=j%100;
    if(q>10&&q<21)printf("th");
    else if(q<=10||q>20){
        if(q%10==1)printf("st");
        else if(q%10==2)printf("nd");
        else if(q%10==3)printf("rd");
        else if(q%10>3||q%10==0)printf("th");
    }
    printf(" humble number is %lld.\n",ara[j-1]);
  }
  return 0;
}
