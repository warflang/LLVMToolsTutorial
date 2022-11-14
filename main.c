#include <stdio.h>

extern int add(int a, int b);

int pickLargest(int a, int b) {
  if(a > b) {
    return a;
  } else if (a < b) {
    return b;
  } else {
    return 0;
  }
}

int main() {
  printf("%d\n",add(5,4));
  return 0;
}
