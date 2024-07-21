template<class T>
ostream& operator<<(ostream& os, const vector<T>& xs){
  for(unsigned int i=0;i<xs.size();++i)
	os << (i?" ":"") << xs[i];
  return os;
}