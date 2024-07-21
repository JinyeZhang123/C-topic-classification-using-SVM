template<typename T>
void Unique(vector<T> &v){
  sort(all(v));
  v.erase(all(v),v.end());
}