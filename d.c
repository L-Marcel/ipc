#include <stdio.h>
#include <string.h>

int main() {
char text[101];
fgets(text, 101, stdin);

for(int i = 0; i < strlen(text); i++) {
    char c = text[i];
    if(
        c == 'a'
        || c == 'e'
        || c == 'i'
        || c == 'o'
        || c == 'u'
        || c == '\n'
        || c == '\0'
    ) continue;
    printf("%c", c);
};

return 0;
};