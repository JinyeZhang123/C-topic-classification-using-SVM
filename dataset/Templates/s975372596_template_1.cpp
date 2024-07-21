template<class T> &ostream<<(ostream &out, const vecotr<T> &v){
	out << "{";
	rep(i,v.size()) out << v[i] << ", ";
	return out << "}