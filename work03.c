#include <stdio.h>

int p1();
int p6();

int main() {
  printf("Problem 1: %d\n", p1(1000));
  printf("Problem 6: %d\n", p6());
}

int p1(int n) {
  int sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int p6() {
  int sum = 0;
  int sqsum = 0;

  int i;
  for (i = 0; i < 101; i++) {
    sum += i;
    sqsum += (i * i);
  }
  
  return (sum * sum) - sqsum;
}
