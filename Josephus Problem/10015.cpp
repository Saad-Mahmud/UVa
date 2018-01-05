//2K18//Q1//
//10015 - Joseph's Cousin
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
 
const int mx=4e5+10;
bool isprime[mx];
vector<int>prime;
void pre()
{
	for(int i=2;i<mx;i++)
	{
		if(!isprime[i])
		{
			prime.PB(i);
			for(int j=2*i;j<mx;j+=i)isprime[j]=true;
		}
	}
}
int arr[mx],n,it;
vector<int>jose;
void kill(int x)
{
	it=(it+x)%jose.size();
	jose.erase(jose.begin()+it);
	it--;
}
void solve()
{
	jose.clear();
	loop(i,1,n)jose.PB(i);
	it=-1;
	for(int i=1;i<n;i++)kill(prime[i-1]);
	arr[n]=jose[0];
}
int main()
{
	pre();
	arr[1]=1;
	while(isc(n) && n)
	{
		if(arr[n]==0)solve();
		printf("%d\n",arr[n]);
	}
	return 0;
}
