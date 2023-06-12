# include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int res = fibonacci(n);
    printf("res = %d", res);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}