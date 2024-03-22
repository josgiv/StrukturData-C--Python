#include <stdio.h>

int main() {
    char S[] = "anton";
    char *p;

    // Cara 1: langsung menunjuk nama array.
    p = S;

    // Coba ini, apa hasilnya?
    for(int i = 0; i < 5; i++) {
        printf("%c", *p);
        p++;
    }

    // Bagaimana dengan ini?
    p = S;
    printf("\n");
    p--;
    for(int i = 0; i < 5; i++) {
        printf("%c", *p);
        p--;
    }

    // Kalau ini?
    p = S;
    printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("%c", *p);
        p++;
    }

    return 0;
}
