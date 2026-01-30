#include <stdio.h>

// do-while と while の違い
int main(int argc, char** argv) {
  // 変数、メモリ宣言
  int i,num;
  char buf[100];

  // 入力促し
  printf("回数を入力：");
  fgets(buf, sizeof(buf), stdin);
  if (sscanf(buf, "%d", &num) != 1) {
    printf("数字を入力してください");
    return 1;
  }

  printf("while で実行\n");
  i = 1;
  // while で実行
  while (i <= num) {
    printf("*");
    i++;
  }
  printf("\n");

  // do-while で実行
  printf("do-while で実行\n");
  i = 1;
  do {
    printf("*");
    i++;
  } while (i <= num);
  printf("\n");
  return 0;
} // do-while の場合、numが0や負であったとしても1つは*が表示される。
