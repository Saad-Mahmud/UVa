//2K18//Q1//
//763 - Fibinary Numbers
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

const int mx=105;
char str1[111],str2[111];
int ans[mx];
bool ok()
{
    int len=-1;
    ans[2]+=ans[1];
    ans[1]=0;
    for(int i=mx;i>=0;i--)
    {
        if(ans[i])
        {
            len=i;
            break;
        }
    }
    for(int i=1;i<len;i++)if(ans[i]&&ans[i+1])return false;
    for(int i=1;i<=len;i++)if(ans[i]>1)return false;
    return true;
}
void print()
{
    int len=-1;
    for(int i=mx;i>=0;i--)
    {
        if(ans[i])
        {
            len=i;
            break;
        }
    }
    if(len==-1)
    {
        printf("0\n");
        return;
    }
    for(int i=len;i>=2;i--)printf("%d",ans[i]);
    printf("\n");
}
void opt()
{
    int len=-1;
    for(int i=mx;i>=0;i--)
    {
        if(ans[i])
        {
            len=i;
            break;
        }
    }
    len+=2;
    ans[2]+=ans[1];
    ans[1]=0;
    for(int i=2;i<=len;i++)
    {
        if(ans[i] && ans[i+1])
        {
            int k=min(ans[i],ans[i+1]);
            ans[i]-=k;
            ans[i+1]-=k;
            ans[i+2]+=k;
        }
        if(ans[i]==2)
        {
            ans[i]=0;
            ans[i+1]++;
            ans[i-2]++;
        }
        else if(ans[i]==3)
        {
            ans[i]=1;
            ans[i+1]++;
            ans[i-2]++;
        }
        else if(ans[i]==4)
        {
            ans[i]=0;
            ans[i+1]+=2;
            ans[i-2]+=2;
        }
        else if(ans[i]==5)
        {
            ans[i]=1;
            ans[i+1]+=2;
            ans[i-2]+=2;
        }
    }
}
int main()
{
    int cas=0;
    while(scanf("%s %s",&str1,&str2)!=EOF )
    {
        if(cas)printf("\n");
        cas++;
        memset(ans,0,sizeof ans);
        int len=strlen(str1);
        int cur=2;
        for(int i=len-1;i>=0;i--,cur++)
        {
            if(str1[i]=='1')ans[cur]++;
        }
        len=strlen(str2);
        cur=2;
        for(int i=len-1;i>=0;i--,cur++)
        {
            if(str2[i]=='1')ans[cur]++;
        }
        while(!ok())opt();
        print();
    }
    return 0;
}
