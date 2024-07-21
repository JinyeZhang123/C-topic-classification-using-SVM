template<typename T>
void m_sort(T ar[], T tmp[], int left, int right){
    int mid;


    if(right > left){
        mid = (left + right) / 2;

        m_sort(ar, tmp, left, mid);
        m_sort(ar, tmp, mid + 1, right);

        merge(ar, tmp, left, mid + 1, right);
        
    }