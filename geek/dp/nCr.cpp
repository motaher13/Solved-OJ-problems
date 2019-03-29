using namespace std;
long long ara[1010][1000]={0};
long long f(long long n,long long r);
int mo=1000000007;
int main()
{
    long long i,j,k,l,m,n,r,t;
    scanf("%lld",&t);
    while(t--)
    {

        scanf("%lld %lld",&n,&r);
        i=f(n,r);
        printf("%lld\n",i);
    }

}
long long f(long long n,long long r)
{
    if(n<0 || r<0 || n<r) return 0;
    if(n==r) return 1;
    if(r==1) return n;

    if(ara[n][r]==0)
        ara[n][r]=(f(n-1,r)%mo+f(n-1,r-1)%mo)%mo;
    return ara[n][r];
}
