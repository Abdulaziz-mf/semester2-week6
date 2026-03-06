#include <stdio.h>
void change(int *x) {
    *x = 10;
}

int main() {
    int a = 5;
    change(&a);
    printf("%d\n",a);
}