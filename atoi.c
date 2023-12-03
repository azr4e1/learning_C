#include <stdio.h>
#include <ctype.h>

int atoi2(char s[]);


int main() {
  char s[10] = "   -345fds";
  char t[10] = "  -43  ";

  printf("%d", atoi2(s) * atoi2(t));
  return 0;
}


int atoi2(char s[]) {

  int i, n, sign;

  for(i=0; isspace(s[i]); ++i)  // skip spaces
    ;

  sign = (s[i] == '-') ? -1 : 1;  // determine sign
  if (s[i] == '+' || s[i] == '-')
    ++i;  // advance i if first char is sign

  for (n=0; isdigit(s[i]); ++i) {
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
