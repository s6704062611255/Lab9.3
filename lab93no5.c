#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 64
int sum_digits(char *txt);
int main() {
  char text[MAX];
  printf("Enter input: ");
  scanf("%63[^\n]", text);
  printf("Sum of digit char: %d\n ", sum_digits(text));
  
}
int sum_digits(char *txt) {
  int sum_digit = 0;
  for (int i = 0; i < MAX && txt[i] != '\0'; i++) {
    if (isdigit(txt[i])) {
      sum_digit += txt[i] - '0';
    }
  }
  return sum_digit;
}