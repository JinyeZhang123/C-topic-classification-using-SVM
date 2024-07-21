template <typename T>
void merge(vector<T> &a, int l, int m, int r){
  int n1 = m - l;
  int n2 = r - m;
  vector<T> L, R;
  for(int i = 0; i < n1; i++)L.push_back(a[l+i]);
  for(int i = 0; i < n2; i++)R.push_back(a[m+i]);
  L.push_back(numeric_limits<T>::max());
  R.push_back(numeric_limits<T>::max());
  int i = 0, j = 0;
  for(int k = l; k < r; k++){
    res++;
    if(L[i] <= R[j]){
      a[k] = L[i];
      i++;
    }