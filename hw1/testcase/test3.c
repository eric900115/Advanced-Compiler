//test3.c
int main(){
    int i;
    int A[70], B[70], C[70];
    for (i = 1; i < 70; i+=5) {
        A[i] = C[i];
        B[i] = A[i - 4];
    }
    return 0;
}