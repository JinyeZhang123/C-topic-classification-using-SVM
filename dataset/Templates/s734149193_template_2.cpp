template<typename R, typename A>
void m_sort(int left, int right, R ar, A tmp){
    if(left < right){
        int mid = (left + right) / 2;
        
        m_sort(left, mid, ar, tmp);
        m_sort(mid + 1, right, ar, tmp);

        merge(left, mid, right, ar, tmp);
    }