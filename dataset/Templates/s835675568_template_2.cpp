template<typename T=int> vector<T> read(size_t n){
  vector<T> arr(n);
  for(size_t i=0;i<n;i++) cin>>arr[i];
  return arr;
}