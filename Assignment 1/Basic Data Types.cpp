https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int d;
  double lf;
  char c;
  float f;
  long ld;
  scanf("%d\n", &d);
  scanf("%ld\n", &ld);
  scanf("%c\n", &c);
  scanf("%f\n", &f);
  scanf("%lf\n", &lf);
  printf("%d\n", d);
  printf("%ld\n", ld);
  printf("%c\n", c);
  printf("%f\n", f);
  printf("%lf\n", lf);
  return 0;
}
