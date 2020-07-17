#include <stdio.h>

int main() {
  char c;
  int flag = 0, remove = 0, word = 0;
  while (scanf("%c", &c) == 1) {
    if (!flag) {
      if (isalpha(c)) {
        flag = 1;
        if (c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' && c != 'U') {
          remove = c;
          continue;
        } else remove = 0;
      }
    }
    if (!isalpha(c)) {
      if (flag) {
        if (remove) putchar(remove);
        printf("ay");
      }
      remove = 0;
      flag = 0;
    }
    putchar(c);
  }
  return 0;
}
