#include<bits/stdc++.h>
using namespace std;

int a[100], b[100];
vector<int> v(100);///Initialize the space is a must

int main()
{
	int n, m, cnt, diff;
	char ch;
	while (~scanf("%d%c", &a[0], &ch))
	{
		for (n = 1; ch != 10; ++n)
			scanf("%d%c", &a[n], &ch);
		cnt = scanf("%d%c", &b[0], &ch);
		for (m = 1; ch != 10 && cnt == 2; ++m)
			cnt = scanf("%d%c", &b[m], &ch);
		sort(a, a + n);
		sort(b, b + m);
		diff = set_intersection(a, a + n, b, b + m, v.begin()) - v.begin();
		if (diff == min(n, m))
		{
			if (n <m) puts("A is a proper subset of B");
			else if (n > m) puts("B is a proper subset of A");
			else puts("A equals B");
		}
		else if (diff) puts("I'm confused!");
		else puts("A and B are disjoint");
	}
	return 0;
}
