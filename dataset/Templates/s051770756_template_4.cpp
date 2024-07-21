template<typename T>
void selection_sort(std::vector<T>&& ary){
    int counter = 0;
    for (int i = 0; i < ary.size(); i++) {
        int min_index = i;
        for(int j = i + 1; j < ary.size(); j++) {
            if (ary[min_index] > ary[j]) {
                min_index = j;
            }