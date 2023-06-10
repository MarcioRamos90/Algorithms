# include <stdio.h>

int factorial(int n);

int main(){
    int n;

    printf("Enter n:");
    scanf("%d", &n);

    int res = factorial(n);
    printf("%d", res);

    return 0;
}

int factorial(int n){
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
