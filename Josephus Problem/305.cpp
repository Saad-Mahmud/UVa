//2K18//Q1//
//305 - Joseph
#include<bits/stdc++.h>
using namespace std;
#define loop(i,L,R) for(int i=(L);i<=(R);i++)
#define rept(i,L,R) for(int i=(L);i<(R);i++)
#define isc(n) scanf("%d",&n)
#define llsc(n) scanf("%lld",&n)
#define dsc(n) scanf("%lf",&n)
#define enl cout<<endl
#define PB(x) push_back(x)
#define MP(x,y) make_pair(x,y)
#define xx first
#define yy second
typedef long long ll;
typedef pair<int,int>PI;
typedef pair<pair<int,int>,int>PII;

int ans[15];
int n;

bool func(int k)
{
    int cur=0;
    rept(i,0,n)
    {
        cur=(cur+k-1)%(n+n-i);
        if(cur<n)return false;
    }
    return true;
}

void solve()
{
    for(int i=n+1;;i++)
    {
        if(func(i))
        {
            ans[n]=i;
            break;
        }
    }
}

int main()
{
    while(isc(n)!=EOF && n)
    {
        if(ans[n]==0)solve();
        printf("%d\n",ans[n]);
    }
    return 0;
}
