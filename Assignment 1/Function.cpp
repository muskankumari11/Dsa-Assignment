//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;
int max_of_number(int a,int b,int c,int d){
    cin>>a>>b>>c>>d;
    int max;
    if(a>b && a>c && a>d){
        max=a;
        return a;   
    }
    else if(b>a && b>c && b>d){
       max=b;
       return b;
    }
    else if(c>a && c>b && c>d){
        max=c;
        return c;
    }
    else{
        max=d;
        return d;
    }
}
    int main(){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int max=max_of_number(a,b,c,d);
       cout<<max;
    }
