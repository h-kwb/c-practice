#include <stdio.h>

int main(int argc, char** argv) {
  // 変数宣言
  int a[4][5];
  int m,n;

  // 二次元配列に値を代入
  for(m = 0; m < 4; m++) {
    for(n = 0; n < 5; n++) {
      a[m][n] = m+n;
    }
  }
  // 中身の表示
  for(m = 0; m < 4; m++) {
    for(n = 0; n < 5; n++) {
      printf("%d ", a[m][n]);
    }
    printf("\n");
  }
  return 0;
}
