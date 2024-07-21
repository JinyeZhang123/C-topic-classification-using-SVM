template<typename T>
void merge_sort(T begin, T end){
    if(begin < end){
        int n = end - begin;
        auto tmp = new typename decay<decltype(*begin)>::type[n];
        m_sort(0, end - begin - 1, begin, tmp);
    }