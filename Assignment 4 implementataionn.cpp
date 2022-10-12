//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,count=0;
    cin>>n>>k;
    vector<int>ar(n);
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i<j)
        {
            if((ar[i]+ar[j])%k==0)
            count++;
        }
    }
    }
cout<<count;
return 0;
}
