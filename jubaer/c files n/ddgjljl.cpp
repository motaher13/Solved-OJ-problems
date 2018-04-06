 #include<cstdio>
 #include<sstream>
 #include<cstdlib>
 #include<cctype>
 #include<cmath>
 #include<algorithm>
 #include<set>
 #include<queue>
 #include<stack>
 #include<list>
 #include<iostream>
 #include<fstream>
 #include<numeric>
 #include<string>
 #include<vector>
 #include<cstring>
 #include<map>
 #include<iterator>
 using namespace std;
 int main()
 {
  // freopen("input.txt","r",stdin);
   long k,exc,count,freq[10000],n=0;
   string key,p,e[10000];
   char ch,excuses[10000],g[10000];
   while(cin>>k>>exc)
   {
     n++;
     printf("Excuse Set #%ld\n",n);
     int max=0;
     for(int i=0;i<exc;i++)
     e[i]="";
     map<string,bool>m;
     //cout<<m["jkh"]<<"\n";
     for(int i=1;i<=k;i++)
     {
       cin>>key;
       m[key]=true;
     }
     int x=0,y=0-1,t=0-1;
     count=0;
     getchar();
     while(scanf("%c",&ch)==1)
     {
       t++;
       g[t]=ch;
       ch=tolower(ch);
       if(isalpha(ch))
       {
         y++;
         excuses[y]=ch;
       }
       else if(ch!='\n'){
       excuses[y+1]='\0';
       p=excuses;
       // cout<<p<<"\n";
       if(m[p])count++;
       y=0-1;
       }
       else
       {
          excuses[y+1]='\0';
          if(strlen(excuses)!=0)
          {
          p=excuses;
         // cout<<p<<"\n";
          if(m[p])count++;
          }
          freq[x]=count;
          if(count>max)
          max=count;
          //cout<<freq[x]<<"\n";
          g[t+1]='\0';
          e[x]=g;
          x++;
          t=0-1;
         // cout<<x<<"\n";
          count=0;
          y=0-1;
         // map<string,bool>m;
          if(x==exc)break;
       }
     }
     // cout<<max<<"\n";
     /*for(int j=0;j<x;j++)
     {
       //if(max==freq[j]);
        cout<<freq[j]<<"\n";
     }*/
     for(int j=0;j<x;j++)
     {
       if(max==freq[j])
        cout<<e[j];
     }
     printf("\n");
   }
   return 0;
 }
