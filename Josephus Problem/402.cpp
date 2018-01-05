//2K18//Q1//
//402 - M*A*S*H
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
 
int n,x,card[20],man[55],lf;
bool kill(int p)
{
	int cur=0;
	for(int i=0;i<n;i++)
	{
		if(lf<=x)return false;
		if(man[i])cur++;
		if(cur==p)
		{
			man[i]=0;
			lf--;
			cur=0;
		}
	}
	if(lf<=x)return false;
	return true;
}
int main()
{
	int cas=0;
	while(scanf("%d %d",&n,&x)!=EOF)
	{
		rept(i,0,n)man[i]=i+1;
		rept(i,0,20)isc(card[i]);
		lf=n;
		int i=0;
		while(i<20 && kill(card[i]))i++;
		printf("Selection #%d\n",++cas);
		//no trailing space 
		int sp=0;
		rept(i,0,n)
		{
			if(man[i])
			{
				if(sp)printf(" ");
				sp++;
				printf("%d",man[i]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
