template<typename T>
void counting_sort(const vector<T> &A, vector<T> &B, int32_t k) {
    vector<T> C(k+1);
    fill(C.begin(), C.end(), 0);

    for (T i : A) {
        C[i]++;
    }