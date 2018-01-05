//2K18//Q1//
//440 - Eeny Meeny Moo
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
 
int arr[155];
int n;
//SOLVE FOR N-1 PEOPLE. SO WE HAVE TO SAVE 1ST.
bool chk(int k)
{
	int ans=0;
	loop(i,1,n-1)
	{
		ans=(ans+k)%i;
	}
	ans++;
	if(ans==1)return true;
	return false;
}
void solve()
{
	for(int i=2;;i++)
	{
		if(chk(i))
		{
			arr[n]=i;
			break;
		}
	}
}
int main()
{  
	arr[2]=1;
	while(isc(n)!=EOF && n)
	{
		if(arr[n]==0)solve();
		printf("%d\n",arr[n]);
	}
    return 0;  
}
