//https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,ap,apcnt=0,orcnt=0,ora;
    cin>>s>>t>>a>>b>>m>>n;
   
    for(int i=0;i<m;i++)
    {
        cin>>ap;
        if(a+ap>=s && a+ap<=t)
        apcnt++;
    }
        for(int i=0;i<n;i++)
        {
        cin>>ora;
        if(b+ora>=s && b+ora<=t)
        {
            orcnt++;
        }
       // if(b+orcnt>=s && b+orcnt<=t);
        }
    cout<<apcnt<<endl<<orcnt<<endl;
    return 0;
    }  
