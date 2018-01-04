//2K18//Q1//
//10774 - Repeated Josephus
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
 
vector<int>bits;
bool chk(int x)
{
	for(int i=x;i<bits.size();i++)if(!bits[i])return false;
	return true;
}
int main()
{  
	int t,cas=0;
	isc(t);
	while(t--)
	{
		int n;
		isc(n);
		printf("Case %d:",++cas);
		bits.clear();
		while(n)
		{
			bits.PB(n&1);
			n=n>>1; 
		}
		reverse(bits.begin(),bits.end());
		int i=0;
		int stp=0;
		while(true)
		{
			bits.PB(1);
			i++;
			stp++;
			while(bits[i]!=1)i++;
			if(chk(i))break;
		}
		i=(1<<(bits.size()-i))-1;
		printf(" %d %d\n",stp,i);
	}
    return 0;  
}
