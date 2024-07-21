template<typename T, int MAX_N>
struct segment_tree_sum {
    T arr1[MAX_N << 1], arr2[MAX_N << 1]; int N;

    segment_tree_sum(int n) {
        N = 1;
        while (N < n) N *= 2;

        for (int i = 0; i < 2*N-1; ++i) {
            arr1[i] = (T)0;
            arr2[i] = (T)0;
        }