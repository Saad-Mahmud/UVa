//2K18//Q1//
//11351 - Last Man Standing
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
 
int n,k;
int solve()
{
	int ans=0;
	loop(i,1,n)
	{
		ans=(ans+k)%i;
	}
	return ans+1;
}
int main() 
{
	int t,cas=0;
	isc(t);
	while(t--)
	{
		isc(n);isc(k);
		printf("Case %d: %d\n",++cas,solve());
	}
	return 0;
}
