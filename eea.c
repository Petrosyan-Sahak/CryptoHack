#include <stdio.h>
int t1 = 0;
int t2 = 1;

int gcd(int a, int b) {
    int t = a % b;

    while(t) {
        a = b;
        b = t;
        t = a % b;
    }
    return b;
}

void eea(int a, int b) {
    int t;
    int r = a % b;
    int q;
  
    while(r) {
        q = a / b;
        t = t1 - t2*q;
        a = b;
        b = r;
        t1 = t2;
        t2 = t;
        r = a % b;
    }
}
        
int main() {
    eea(26513, 32321);
    printf("%d, %d\n", t1, t2);

    return 0;
}
