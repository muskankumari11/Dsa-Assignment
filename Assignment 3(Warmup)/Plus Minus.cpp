https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
 int positive=0;
    int negative=0;
    int zero=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    if(a[i]>0){
      positive++;
    }
    else if(a[i]<0){
      negative++;
    }
    else{
        zero++;
    }
}
    cout<<(float)positive++/n<<endl;
    cout<<(float)negative++/n<<endl;
    cout<<(float)zero++/n;
}
