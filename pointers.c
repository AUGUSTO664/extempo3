#include <stdio.h>
#include <math.h>

void update(int *a, int *b){

   *a += *b;
   *b = fabs(*a -(2**b));

}

int main() {

  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n %d\n", a, b);

  return 0;

}
