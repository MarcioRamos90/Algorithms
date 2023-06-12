# Fibonacci Series

Fibonacci series are the numbers in the following sequence

0,1,1,2,3,5,8,13,21,34,55,89,144,233,...

By definition, the first two numbers are 0 and 1.
And each subsequent numbers in the series is equal to the sum of the previous two numbers.

## Fibonacci Recursive Function

$F(n) = n \ \ \ \ when \ \ \ \ n <= 1$

$F(n) = F(n-1) + F(n-) \ \ \ \ when \ \ \ \ n > 1$

i.e

$ F_0 = 0$

$F_1 = 1$

$F_n = F_{n-1} + F_{n-2} \ \ \ \ when \ \ \ \ n > 1$

### Example

Find the $6^{th}$ element of the fibonacci series i.e, find $F_5$ we know, that the first and the second element are $F_0 = 0$ and $F_1=1$ respectively.

$F_2 = F_1 + F_0 = 1 + 0 = 1$

$F_3 = F_2 + F_1 = 1 + 1 = 2$

$F_4 = F_3 + F_2 = 2 + 1 = 3$

$F_5 = F_4 + F_3 = 3 + 2 = 5$

$F_6 = F_5 + F_4 = 5 + 3 = 8$


## Fibonacci Pseudo Code

```
Fibo(n)
Begin
    if n <= 1 then
        Return n;
    else
        Return Call Fibo(n-1) + Call Fibo(n-2)
End
```

- [C implemention](in_c/main.c)
- Python implementations
    -  [normal](in_python/main.py)
    -  [cached](in_python/main_cached.py)
- [Swift implementation](in_swift/main.swift)