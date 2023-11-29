#include <stdio.h>

int min(int size, int values[size]) {
    int smaller = values[0];

    for(int i = 0; i < size; i++) {
        if(values[i] <= smaller) {
            smaller = values[i];
        };
    };

    return smaller;
};

long long int product() {
    int n;
    scanf("%d", &n);

    long long int result = 1;
    int digits[n];

    for(int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        digits[i] = value;
    };

    int limit = 1;
    for(int i = 0; i < n; i++) {
        if(digits[i] == min(n, digits) && limit > 0) {
            result = result * (digits[i] + 1);
            limit--;
        } else {
            result = result * digits[i];
        };
    };

    return result;
};

int main() {
    int n;          
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%lli\n", product());
    };

    return 0;
};