#include <stdio.h>

int count_mono(int n, char text[n]) {
    char last = 'a';
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(i > 0 && i < n - 1) {
            if(
                (text[i - 1] == 'a' || text[i + 1] == 'a')
                && text[i] == 'a'
            ) {
                count++;
            };
        } else if(i == 0) {
            if(
                text[i + 1] == 'a'
                && text[i] == 'a'
            ) {
                count++;
            };
        } else if(i == n - 1) {
            if(
                text[i - 1] == 'a'
                && text[i] == 'a'
            ) {
                count++;
            };
        };
    };

    return count;
};

int main() {
    int n;
    scanf("%d", &n);
    char text[n];
    scanf("%s", text);

    printf("%d", count_mono(n, text));
};