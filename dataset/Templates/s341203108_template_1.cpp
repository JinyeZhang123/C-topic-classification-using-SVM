template<typename T>
void merge(T ar[], T tmp[], int left, int mid, int right_last){
    int n, left_last, tmp_pos=left;

    left_last = mid - 1;
    n = right_last - left + 1;

    // ??????????????????????????§
    while (left <= left_last && mid <= right_last) {
        count++; // ???????????°
        if(ar[left] <= ar[mid]){
            tmp[tmp_pos] = ar[left];
            left++;
        }