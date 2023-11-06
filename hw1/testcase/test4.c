//test4.c
int main(){
    int i;
    int A[80], B[80], C[80], D[80], E[30], F[80];
    for (i = 5; i < 30; i += 5) {
        A[i] = C[i];
        B[i] = A[i - 4];
        D[i] = B[5 * i];
        E[i] = A[2 * i + 10];
        E[i - 5] = B[i];
    }
    return 0;
}