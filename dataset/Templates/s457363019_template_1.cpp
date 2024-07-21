template <typename T>
class Array
{
private:
  llong merge(int l, int m, int r)
  {
    llong cnt = 0;
    int n1 = m - l;
    int n2 = r - m;
    vector<T> L, R;
    L.resize(n1+1);
    R.resize(n2+1);
    for(int i = 0; i < n1; i++) L[i] = A[l+i];
    for(int i = 0; i < n2; i++) R[i] = A[m+i];
    L[n1] = INFTY;
    R[n2] = INFTY;
    int a = 0;
    int b = 0;
    for(int i = l; i < r; i++)
    {
      if(L[a] <= R[b])
      {
        A[i] = L[a];
        a++;
      }