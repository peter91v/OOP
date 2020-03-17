#include <stdio.h>

int main() {
char s[6] = "hallo";
int cnt =0;
char s1[100];

while (s[cnt] !='\0') {
    s1[cnt] = s[cnt];
    cnt++;
}
s1[cnt] = '\0';
    return 0;
}