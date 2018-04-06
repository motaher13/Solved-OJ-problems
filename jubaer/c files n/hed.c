#include <stdio.h>
#include <math.h>
#include <string.h>

char str[10000],n[1000][10000],chr;
int len,count,ten,temp,i,j,k,sum[10000],m,cas;

void main ()
{
scanf ("%d",&m); cas=0;
scanf ("%c",&chr); //to handle an <Enter> after inputting the m

while (cas<m)
{
cas++; count=1; k=0; temp=0;
while (scanf ("%c",&chr)==1)
{
if (chr==' ' || chr=='\n')
{
temp++; len=strlen(str); sum[temp]=0;
for (i=len-1;i>=0;i--)
{
switch (str[i])
{
case '0': {sum[temp]+=0; break;} case '5': {sum[temp]+=5*pow(10,ten); break;}
case '1': {sum[temp]+=1*pow(10,ten); break;} case '6': {sum[temp]+=6*pow(10,ten); break;}
case '2': {sum[temp]+=2*pow(10,ten); break;} case '7': {sum[temp]+=7*pow(10,ten); break;}
case '3': {sum[temp]+=3*pow(10,ten); break;} case '8': {sum[temp]+=8*pow(10,ten); break;}
case '4': {sum[temp]+=4*pow(10,ten); break;} case '9': {sum[temp]+=9*pow(10,ten); break;}
}
ten++;
}
for (i=0;i<len;i++)
{
str[i]='\0';
}
k=0;; count++; ten=0;
}
else {str[k]=chr; k++;}

if (chr=='\n') break;
}

for (i=1;i<=temp;i++)
{
scanf ("%s",n[sum[i]]);
}

for (i=1;i<=temp;i++)
{
printf ("%s\n",n[i]);
}
if (cas<m) printf ("\n");
scanf ("%c",&chr); //to handle the printf ("\n");
}
}
