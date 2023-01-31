https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> a,b;
    for(int i=0; i<3; i++){
        int n;
        cin>>n;
        a.push_back(n);
    }
    for(int i=0; i<3; i++){
        int n;
        cin>>n;
        b.push_back(n);
    }
    int c1=0, c2=0;
    for(int i=0 ;i<3; i++){
        if(a[i]>b[i]){
            c1++;
        }
        else if(a[i]<b[i]){
            c2++;
        }
    }
    cout<<c1<<" "<<c2;
    
}
