#include <stdio.h>


void merge(int *a, int m, int *b, int n, int *c);

int main() {
	int a[3] = {1, 4, 6};
	int b[4] = {2, 3, 5, 7};
	
	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);
    
	int c[m + n];

    merge(a, m, b, n, c);

    int cs = sizeof(c) / sizeof(c[0]);

    printf("m = {%d}, n = {%d}, c = {%d}\n\n", m, n, cs);

	for (int i = 0; i < cs; i++) {
        printf("%d ", c[i]);
    }

	return 0;
}

void merge(int *a, int m, int *b, int n, int *c) {
    int pa = 0;
    int pb = 0;
    int pc = 0;

    while(pa < m && pb < n) {
        if(a[pa] < b[pb]) {
            c[pc] = a[pa];
            pa = pa +1;
        } else {
            c[pc] = b[pb];
            pb = pb + 1;
        }
        pc = pc + 1;
    }
    if (pa == m) {
        while(pb < n) {
            c[pc] = b[pb];
            pb = pb + 1;
            pc = pc + 1;
        }
    } else {
        while(pa < m) {
            c[pc] = a[pa];
            pa = pa + 1;
            pc = pc + 1;
        }
    }
}

