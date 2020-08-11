/*
prob title: Merge two sorted Arrays without extra space.
prob link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0
video link : https://www.youtube.com/watch?v=hVl2b3bLzBw 
. Algo used are insertion sort with slight modification
*/

#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,n)    for(auto i=s;i<n;++i)
#define foo(i,s,n)    for(auto i=s;i>=n;--i)
#define ll long long
#define ull unsigned long long int
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(t)            int t; cin>>t; while(t--)
const int MOD = 1000000007;
ll mod(ll x){
    return (x%MOD + MOD)%MOD;
}
ll mul(ll a , ll b){
    return mod(mod(a)*mod(b));
}
bool comp(pair<ll,ll>& a, pair<ll,ll>& b)
{
    if(a.second == b.second)
    return a.first > b.first;
    else
    return b.second < a.second;
}
static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
int main()
{
    fast
    w(t)
    {
        ll x,y;
        cin>>x>>y;
        vector<ll> p(x);
        vector<ll> q(y);
        fo(i,0,x)
        {
            cin>>p[i];
        }
        fo(i,0,y)
        {
            cin>>q[i];
        }
        int j=x-1,k=0;
        while(j>=0 && k<y)
        {
            ll n = p[j];
            ll m = q[k];
            if(n>m)
            {
                p[j--]=m;
                q[k++]=n;
            }
            else
            {
                j--;
                k++;
            }
        }
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        for(ll i=0;i<x;i++)
        {
            cout<<p[i]<<" ";
        }
        for(ll i=0;i<y;i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


