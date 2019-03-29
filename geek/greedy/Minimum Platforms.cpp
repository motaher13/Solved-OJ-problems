#include<bits/stdc++.h>
using namespace std;


//better ans

//
//int min(int arr[], int dep[], int n)
//{
//    multimap<int, char>m;
//    for(int i=0; i<n; i++)
//        {
//            m.insert(make_pair(arr[i],'a'));
//            m.insert(make_pair(dep[i],'d'));
//        }
//
//    int p=0,res=0;
//    for(auto i=m.begin(); i!=m.end(); i++)
//    {
//        if((*i).second =='a')
//            p++;
//        else
//            p--;
//        if(p>res)
//        res=p;
//    }
//    return res;
//}


struct data
{
    int st,ed;

    bool operator < (const data&p) const
    {
        return st<p.st;
    }
};

struct dt
{
    int s;

    bool operator < (const dt&p) const
    {
        return s>=p.s;
    }
};

int main() {
    int i,j,t,k,f,b,m,n;
	scanf("%d",&t);
	data ara[1010];

	dt a;
//    freopen("a.txt","w",stdout);
	while(t--)
	{
	    priority_queue<dt>q;
	    scanf("%d",&n);
	    m=0;
	    for(i=0;i<n;i++)
            scanf("%d",&ara[i].st);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i].ed);

        sort(ara,ara+n);

        for(i=0;i<n;i++)
        {
            if(q.size()==0 || q.top().s>ara[i].st)
            {
                a.s=ara[i].ed;
                printf("%d\n",ara[i].ed);
                q.push(a);
                if(q.size()>m)
                    m=q.size();
            }
            else
            {
                printf("%d %d\n",q.top(),ara[i].ed);
                q.pop();
                a.s=ara[i].ed;
                q.push(a);
            }
        }

        printf("%d\n",m);
	}
//	 fclose(stdin);
	return 0;
}



