#include "stdio.h"

int main() {
  int n, m;
  scanf("%d %d\n", &n, &m);

  char board[50][50];
  char tmp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      scanf("%c", board[i] + j);
    scanf("%c", &tmp);
  }

  int count1;
  int count2;
  int min = 2500;
  char first;
  int flag=0;
  for (int i = 0; i < n - 7; i++) {
    for (int j = 0; j < m - 7; j++) {
      count1 = 0;
      count2 = 0;
      first = board[i][j];
      for (int k = i; k < i + 8; k++) {
        for (int l = j; l < j + 8; l++) {
          if ((flag % 2 == 0 && board[k][l] != first) ||
              (flag % 2 != 0 && board[k][l] == first)) {
            count1++;
          }
          else if ((flag % 2 == 0 && board[k][l] == first) ||
                (flag % 2 != 0 && board[k][l] != first)) {
              count2++;
            }
          flag++;
        }
        flag++;
      }

      if (min > count1)
        min = count1;
      if (min > count2)
        min = count2;
    }
  }

  printf("%d", min);

  return 0;
}
