# merging sort

## Mergigng

Merging is a proccess to combibe two similar structures in one structure

## Merging types

there are two types of merging:

- end-to-end merging
- sorted merging

### End-to-End merging

in this type of merging we simple combine one structure at end of the other structure.

the structures that are merged can either be in sorted as well as in unsorted orser.

#### Example:

```
array A: {3, -1, 4}
array B: {7, 1, 9, 2}
Merging A and B:  {3, -1, 4, 7, 1, 9, 2}
```

### Sorted merging

In this type of merging we combine the elements of the structure which are in sorted order, in such a way that we get a final sorted structure either in ascending or descending order.

```
Array: A, size: 3 = {1, 4, 6}
Array: B, size: 4 = {2, 3, 5, 7}
Array: C, size: 3+4→7 = {1, 2, 3, 4, 5, 6, 7}
```

Pass thougth each item of the arrays comparing position by position .

when a array are exausted, we simply copy the rest of elements of array to array C

---

Algorithm

```
/*a[0:m-1], b[0:n-1] are two arrays having m and n elements respectively.

c[0:r-1] is the final array of size r= m+n */

Merge(a, m, b, n, c)
Begin
    Set pa = 0, pb = 0, pc = 0
    while(pa < m && pb < n ) do
        if( a[pa] < b[pb] ) then

            Set c[pc] = a[pa];

            Set pa = pa + 1;

        else

            Set c[pc] = b[pb];

            Set pb = pb + 1;

        endif

    Set pc = pc + 1;

    endWhile
    if (pa == m)  then      //array A exausted

        while(pb < n) do

            Set c[pc] = b[pb]

            Set pb = pb + 1, pc = pc + 1;

        endwhile

    else

        while(pa < m) do

            Set c[pc] = a[pa];

            Set pa = pa + 1, pc = pc + 1;

        endWhile
    endif
End
```