#include <stdio.h>

int main(int argc, char** argv) {
  int a;
  int b;
  
  printf("a=");
  scanf("%d", &a);
  
  printf("b=");
  scanf("%d", &b);
  
  printf("aの値は%dです。\n", a);
  printf("bの値は%dです。\n", b);
  
  printf("%d + %d = %d\n", a, b, a+b);
  printf("%d - %d = %d\n", a, b, a-b);
  printf("%d * %d = %d\n", a, b, a*b);
  if (b != 0) {
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
  } else {
    printf("0 で割ることはできません。\n");
  }
  return 0;
}
