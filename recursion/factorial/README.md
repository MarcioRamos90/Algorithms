< [home](/README.md)

# Factorial of n

Factorial of any number n isdenited as n! and is equal to:

```
n! = 1 * 2 * 3 * ... * (n - 2) * (n - 1) * n
```

Example:

```
3! = 1 X 2 X 3
3! = 6
```

### Factorial Function

```
F(n) = 1                when n = 0 or 1
F(n) = x X F(n - 1)     when n > 1
```


#### Example

Find 3!

we know
```
F(n) = 1                when n = 0 or 1
F(n) = x X F(n - 1)     when n > 1
```

so,
```
F(3) = 3 X F(2)         ...(i)
F(2) = 2 X F(1)         ...(ii)
F(1) = 1
```

Using F(1) value in (ii) we get,

```
F(2) = 2 X 1 = 2
F(3) = 3 X 2 = 6

Therefore, 3! = 6
```

### Factorial Pseudo Code

```
Fact(n)
Begin
    if n == 0 or 1 then
        return 1;
    else
        return n*Call Fact(n-1)
    endif
End
```

### Implementations

- [C implemention](factorial_in_c/main.c)
- [Python implemention](factorial_in_python/main.py)
- [Swift implemention](factorial_in_swift/main.swift)