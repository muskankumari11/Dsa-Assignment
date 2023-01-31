//https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
#include <cmath>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    cout<<sum;
}
