//test5.c
int main(){
    int i;
    int A[70], B[70], C[70], D[70], E[70];
    for (i = 1; i < 30; i+=1) {
        A[i] = C[i];
        B[i] = A[i - 4];
        C[i] = B[i - 6];
        D[i] = A[5 * i - 4];
        D[i - 1] = C[3 * i];
        E[i] = C[4 * i + 3];
    }
    return 0;
}