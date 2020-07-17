#include <stdio.h>
int main()
{
    int a,b,c,d,l,f,g,n,i,t;

    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&l,&f,&g);
    if(l==f&&g==f){
        t=a+b+c+d+((l+f)/2);
    }
    else if((l==g&&l<f)||(f==g&&f<l)){
        t=a+b+c+d+((l+f)/2);
    }
      else if(l==f&&l<g){
        t=a+b+c+d+((l+g)/2);
    }
     else if(l==f&&l>g){
        t=a+b+c+d+((l+f)/2);
     }
     else if(f==g&&l<f){
        t=a+b+c+d+((f+g)/2);
     }
     else if(l==g&&l>f){
        t=a+b+c+d+((l+g)/2);
     }
    else if(l<f&&l<g){
    t=a+b+c+d+((f+g)/2);
    }
    else if(f<l&&f<g){
    t=a+b+c+d+((l+g)/2);
    }
    else{
    t=a+b+c+d+((l+f)/2);
    }
    if(t>=90){
    printf("Case %d: A\n",i+1);
    }
    else if(t>=80&&t<90){
    printf("Case %d: B\n",i+1);
    }
else if(t>=70&&t<80){
    printf("Case %d: C\n",i+1);
    }
else if(t>=60&&t<70){
    printf("Case %d: D\n",i+1);
    }
   else printf("Case %d: F\n",i+1);
}
}
