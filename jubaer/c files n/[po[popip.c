#include<stdio.h>
#include<stdlib.h>

long long temp,n,m,i;

struct T
{
    long long a, b;
};

int sort(const void *aa, const void *bb)
{
   T *p = (T *)aa;
   T *q = (T *)bb;

   if( p->b == q->b)
   {
      if(p->a%2==0 && q->a%2==0)
      {
         if(p->a > q->a)
         {
            temp=p->a;
            p->a=q->a;
            q->a=temp;
            return -1;
         }
         else
            return -1;
      }
      else if(p->a%2!=0 && q->a%2!=0)
      {
         if(p->a < q->a)
         {
            temp=p->a;
            p->a=q->a;
            q->a=temp;
            return -1;
         }
         else
            return -1;
      }
      else
      {
         if(p->a%2==0)
         {
            temp=p->a;
            p->a=q->a;
            q->a=temp;
            return -1;
         }
         else
            return -1;
      }
   }

   else if(p->b > q->b)
      return 1;

   else
      return -1;
}
   T s[10001];
int main()
{


   while(scanf("%lld%lld",&n,&m)==2)
   {
      if(n==0 && m==0)
      {
         printf("%lld %lld\n",n,m);
         break;
      }

      for(i=0;i<n;i++)
      {
         scanf("%lld",&s[i].a);
         s[i].b=s[i].a%m;
      }

      qsort(s,n,sizeof(T),sort);

      printf("%lld %lld\n",n,m);
      for(i=0;i<n;i++)
         printf("%lld\n",s[i].a);
   }
   return 0;
   }
