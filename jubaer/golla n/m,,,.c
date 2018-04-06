  #include<stdio.h>
  int main()
  {
    int n;
    while(scanf("%d",&n)==1)
    {
      if(n==0)
        break;
      int num1[3000],lnum1=1,i,j,k,l,m,r=0,lnum2=0,num2[10];
      for(i=0;i<10;i++)
      {
        num2[i]=0;
      }
      num1[0]=1;
      for(i=2;i<=n;i++)
      {
        for(j=0;j<lnum1;j++)
        {
          m=(num1[j]*i+r)%10;
          r=(num1[j]*i+r)/10;
          num1[j]=m;
        }
        while(r!=0)
       {
          num1[lnum1++]=r%10;
          r=r/10;
        }
      }
     for(i=lnum1-1;i>=0;i--)
     {
        m=num1[i];
        num2[m]=num2[m]+1;
      }
      printf("%d! --\n  ",n);
      for(i=0;i<10;i++)
      {
        printf("(%d)%5d  ",i,num2[i]);
       if(i==4)
       {
                printf("\n  ");
        }
      }printf("\n");
    }
    return 0;
 }
