#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    
    int days[m];
    int total = 0;

    for(int i = 0; i < m; i++) {
        scanf("%d", &days[i]);
        total += days[i];
    };

    total++;
    total = total / 2;


    for(int i = 0; i < m; i++) {
        if(total > days[i]) {
            total -= days[i];
        } else {
            printf("%d %d", i + 1, total);
            break;
        };
    };

    return 0;
};