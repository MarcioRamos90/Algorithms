from functools import cache

def main():
    print("Enter n:", end=" ")

    n = int(input())
    res = fibonacci(n)
    print(f"result {res}")


@cache
def fibonacci(n):
    if n <= 1:
        return n
    
    return fibonacci(n - 1) + fibonacci(n - 2)


main()