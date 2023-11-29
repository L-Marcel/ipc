#include <stdio.h>
#include <stdlib.h>

int get_distance(char c) {
    if(c == 'A') return 0;
    if(c == 'B') return 3;
    if(c == 'C') return 4;
    if(c == 'D') return 8;
    if(c == 'E') return 9;
    if(c == 'F') return 14;
    else return 23;
};

int main() {
    char p, q;
    scanf("%c %c", &p, &q);
    int start = 0;

    int distance = abs(get_distance(q) - get_distance(p));
    printf("%d", distance);

    return 0;
};