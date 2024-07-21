template<typename T>
void insertion_sort(std::vector<T>&& ary) {
    for (int i = 1; i < ary.size(); i++) {
        int target = ary[i];
        int j = i - 1;
        while(j >= 0 &&  ary[j] > target) {
            ary[j+1] = ary[j];
            j--;
        }