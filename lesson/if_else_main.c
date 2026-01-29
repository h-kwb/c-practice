#include <stdio.h>

int main(int argc, char** argv) {
  // 型宣言
  int a;
  char buf[100];
  
  printf("数値を入力:");
  
  // 入力を受け取る
  fgets(buf, sizeof(buf), stdin);
  // 入力チェック
  if (sscanf(buf, "%d", &a) != 1) {
    printf("数値を入力してください。\n");
    return 1; // error終了
  }
  
  // 値が正負か判定
  if (a > 0) {
    printf("%dは、正の数です。\n", a);
  } else if (a < 0){
    printf("%dは、負の数です。\n", a);
  } else {
    printf("%dは、0です。\n", a);
  }
  return 0;
}
