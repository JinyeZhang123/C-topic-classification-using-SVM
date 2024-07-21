template<typename R, typename A>
void merge(int left, int left_last, int right_last, R ar, A tmp){
    int right = left_last + 1;
    int n = right_last - left + 1;
    int t = left;
    int c = left;
    DbgFunc("%d,%d,%d,%d", left, left_last, right, right_last);

    while (left <= left_last && right <= right_last) {
        if(ar[left] <= ar[right]){
            tmp[t] = ar[left];
            left++;
        }