#include <stdio.h>
#include <string.h>
int main() {
  char s[100];
  gets(s);
  char word[100];
  int j = 0;
  int i;
  for (i = 0; i < strlen(s); i++) {
    if (s[i] != 44) {
      word[j] = s[i];
      j++;
    } else {
      word[3] = '\0';
      puts(word);
      j = 0;
    }
  }
  printf("%c", s[i-3]);
  printf("%c", s[i-2]);
  printf("%c", s[i-1]);
}
