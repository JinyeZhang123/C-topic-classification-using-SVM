template <typename T>
void merge_sort(vector<T> &a){
  merge_sort<T>(a, 0, a.size());
}