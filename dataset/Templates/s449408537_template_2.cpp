template<class T>
istream& operator>>(istream& is, vector<T>& xs){
  for(auto& x: xs)
	is >> x;
  return is;
}