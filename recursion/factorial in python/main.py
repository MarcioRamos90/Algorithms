def main():
    print("Enter n:")
    n = int(input())
    res = factorial(n)

    print("{}".format(res))


def factorial(n):
    if n == 1 or n == 0:
        return 1

    return n * factorial(n - 1)

main()
