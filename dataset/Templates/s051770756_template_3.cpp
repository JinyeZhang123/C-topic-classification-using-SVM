template<typename T>
void bubble_sort(std::vector<T> && ary) {
    int n = ary.size();
    bool flag = true;
    int counter = 0;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; j--) {
            if (ary[j] < ary[j - 1]) {
                std::swap(ary[j], ary[j - 1]);
                flag = true;
                counter++;
            }