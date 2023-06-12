< [home](../README.md)

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

- [factorial algorithm](factorial/README.md)