# Recursion

wen a function calls itself it is called a recursion.

## Types of recursion
there are two types of recursion

- Finite recursion
- Infinite recursion

### Finite recursion

A recursion with a terminating condition is called a finit recursion.

its like a finit loop.

The function calls itself as long as the terminating condition is not satisfied.

#### Recursion with terminating condition

```
int main() {
    callA(5);
    return 0;
}

void callA() {
    if (a==1)  // when a is equal to 1 constrol return to main() 
        return;
    else
        callA(a-1);
}
```

### Infinite recursion

A recursion without terminating condition is called an infinite recursion.

It behaves just like an infinite loop.

The function goes on calling itself.


#### Recursion without terminating codition

```
int main(){
    hello();
    return 0;
}
void hello(){
    hello();
}
```

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

