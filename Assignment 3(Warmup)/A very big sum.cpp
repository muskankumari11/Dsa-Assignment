https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main(){
   long sum=0;
   long n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
       cin>>ar[i];
   }
   for(int i=0;i<n;i++){
       sum=sum+ar[i];
   }
 cout<<sum<<" ";
}
