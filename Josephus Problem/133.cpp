//2K18//Q1//
//133 - The Dole Queue
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
 
int n, m, k;
bool dole[22];

int main() 
{
	
	while (scanf("%d %d %d",&n,&k,&m) && n+m+k>0) 
	{
		memset(dole,false,sizeof dole);
		bool first = true;
		int official1=1,official2=n,counter=0;
		while (counter < n) 
		{
			int o1=0,o2=0;
			while (true) 
			{
				if(!dole[official1])o1++;
				if(o1== k)break;
				official1=official1%n +1;
			}
			while (true) 
			{
				if(!dole[official2])o2++;
				if(o2==m)break;
				official2--;
				if(official2==0)official2=n;
			}
			dole[official1]=true;
			dole[official2]=true;
			
			first? first=false:printf(",");
			if (official1==official2) 
			{
				printf("%3d",official1);
				counter++;
			}
			else 
			{
				printf("%3d%3d",official1,official2);
				counter += 2;
			}
		}
		printf("\n");
	}
	return 0;
}
