template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
  const auto last=--cend(v);
  for(auto i=cbegin(v); i<last; ++i) os<<*i<<'\n';
  os<<*last<<'\n';
  return os;
}