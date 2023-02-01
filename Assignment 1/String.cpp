#include <iostream>
#include <string>
using namespace std;
int main() {
string a,b;
cin>>a>>b;
cout<<a.size()<<" "<<b.size()<<" "<<endl;
string c="a+b";
cout<<(a+b)<<" "<<endl;
char A,B;
A=a[0];
B=b[0];
a[0]=B;
b[0]=A;
cout<<a<<" "<<b<<" "<<endl;
}
