template<typename T>
void shell_sort(T ar, int n, int g){
    for (int i = g; i < n; i++) {
        auto v = ar[i];
        int j = i - g;
        while (j >= 0 && ar[j] > v ) {
            ar[j+g] = ar[j];
            j -= g;
            cnt++;
        }