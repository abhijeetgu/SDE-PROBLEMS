/*
prob title: Repeat and Missing Number.
prob link: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0
video link : https://www.youtube.com/watch?v=5nMGY4VUoRY
algo used XOR(bit maipulation)
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0,b=0;
	    cin>>n;
	    vector<int> nums(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>nums[i];
	    }
	    int xor1 = nums[0];
	    for(int i=1;i<n;i++)
	    {
	        xor1 ^= nums[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        xor1 ^= i;
	    }
	    //xor1 = xor1 & ~(xor1 - 1);
	     xor1 &= -xor1;
	    for(int x : nums)
        {
            if(xor1 & x) a ^= x;
            else b ^=x;
        }
        for(int i=1;i<=n;i++)
        {
            if(xor1 & i) a ^= i;
            else b ^= i;
        }
        //cout<<a<< b<<endl;
        int miss,rep,t=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==a)
            {
                rep=a;
            }
            if(nums[i]==b)
            {
                rep=b;
            }
            if(nums[i]==a)
            {
                t=1;
            }
            if(nums[i]==b)
            {
                r=1;
            }
        }
        if(t==0)
        {
            miss = a;
        }
        else
        {
            miss = b;
        }
        cout<<rep<<" "<<miss<<endl;
        
	    
	    
	}
	return 0;
}
