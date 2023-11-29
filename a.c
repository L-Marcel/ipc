#include <stdio.h>

int main() {
    int n, h;
    scanf("%d %d", &n, &h);

    int qtd = 0;

    for(int i = 0; i < n; i++) {
        int m;
        scanf("%d", &m);

        if(m <= h) {
           qtd++;
        };
    };

    printf("%d", qtd);

    return 0;
};