#include <stdio.h>

int main(int argc, char** argv) {
  // 型宣言
  int num;
  char buf[100];
  
  printf("1~3の値を入力してください：");

  //入力受付
  fgets(buf, sizeof(buf), stdin);
  
  // 入力チェック
  if (sscanf(buf, "%d", &num) != 1 || num < 1 || nmu > 3) {
    printf("1~3を入力してください。\n");
    return 1; // error終了
  }

  // switch文による判定
  switch(num) {
  case 1:
    printf("%d - one\n", num);
    break;
  case 2:
    printf("%d - two\n", num);
    break;
  case 3:
    printf("%d - three\n", num);
    break;
  }
  return 0;
}
