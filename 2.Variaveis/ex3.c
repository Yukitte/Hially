    #include <stdio.h>

    int main() {
        int A= 10, B=20, C=30;

    

        if (A <= B && A <= C) {
            printf("%d ", A);
            if (B <= C) {
                printf("%d %d\n", B, C);
            } else {
                printf("%d %d\n", C, B);
            }
        } else if (B <= A && B <= C) {
            printf("%d ", B);
            if (A <= C) {
                printf("%d %d\n", A, C);
            } else {
                printf("%d %d\n", C, A);
            }
        } else if (C <= A && C <= B) {
            printf("%d ", C);
            if (A <= B) {
                printf("%d %d\n", A, B);
            } else {
                printf("%d %d\n", B, A);
            }
        }

        return 0;
    }