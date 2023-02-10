https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    int A;
    int B;
    if(a<b){
    A=a+b;
    B=b-a;
    }
    else if(a>b){
       A=a+b;
       B=a-b; 
    }
    cout<<A<<endl;
    cout<<B<<endl;
}
