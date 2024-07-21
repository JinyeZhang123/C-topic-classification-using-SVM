LB operator&(const LB &A, const LB &B) {
    LB C, D, E;
    for(int i = L - 1; ~i; i--) {
      if(A[i]) {
        C(A[i]);
        D[i] = 1ull << i;
      }