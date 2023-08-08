//
//  ex3-prime.c
//  c-practice
//

#include <stdio.h>
#include <math.h>

#define TRUE 1

int is_prime(int n) {
    int i, sqrn;
    sqrn = (int)sqrt(n);
    for (i = 2; i <= sqrn; i++)
        if (n % i == 0)
            return !TRUE;
    return TRUE;
}

int main(void) {
    int n, r;
    while(TRUE) {
        printf("\nInput number: ");
        scanf("%d", &n);
        if (n < 0)
            continue;
        if (n == 0)
            break;
        r = is_prime(n);
        printf("%d %s prime number.\n", n, r ? "is" : "is not");
    }
    return 0;
}
