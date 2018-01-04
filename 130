//2K18//Q1GD-1//
//130 - Roman Roulette
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

vector<int> jose;  
int main()
{  
    int n,k;  
    while(scanf("%d %d",&n,&k)!=EOF && n+k>0)
    {  
		jose.clear();
        loop(i,1,n)jose.push_back(i);  
        int second,first=(k-1)%jose.size();
        while(jose.size()!=1)
        {  
			second = (first +(k-1))%(jose.size()-1); 
			if(second >= first)second=(second+1)%jose.size(); 
			jose[first] = jose[second]; 
			jose.erase(jose.begin() + second); 
			if((second<first))first=(first+(k-1))%jose.size();
			else first=(first+k)%jose.size();
		}  
        printf("%d\n",(n-jose[0]+1)%n+1);  
    } 
    return 0;  
}
