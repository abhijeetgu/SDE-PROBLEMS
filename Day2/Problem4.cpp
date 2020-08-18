/*
prob title: Count Inversion.
prob link: https://practice.geeksforgeeks.org/problems/inversion-of-array/0
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define w(t)            int t; cin>>t; while(t--)
ll merge(vector<ll>&nums,int s,int mid,int e,vector<ll> &temp)
{
    ll cnt=0;
    
    int i = s,j=mid+1,k=s;
    while(i<=mid && j<=e)
    {
        if(nums[i]<= nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++]=nums[j++];
            cnt = cnt + (mid-i+1);
        }
    }
    while(i<=mid)
    {
        temp[k++] = nums[i++];
    }
    while(j<=e)
    {
        temp[k++] = nums[j++];
    }
    // now copy from temp to nums
    for(int i=s;i<=e;i++)
    {
        nums[i] = temp[i];
    }
    return cnt;
    
}
ll inversion_count(vector<ll> &nums,int s,int e,vector<ll> &temp)
{
    int mid;
    ll inv_count=0;
    if(e>s)
    {
        mid = (s+e)/2;
        inv_count += inversion_count(nums,s,mid,temp);
        inv_count += inversion_count(nums,mid+1,e,temp);
        
        inv_count += merge(nums,s,mid,e,temp);
    }
    return inv_count;
}
int main()
{
    fast
    w(t)
    {
        ll n;
        cin>>n;
        vector<ll> nums(n+1);
        vector<ll> temp(n+1);
        //ll nums[n+1],temp[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        
        ll ans = inversion_count(nums,0,n-1,temp);
        cout<<ans<<endl;
    }
    return 0;
}


