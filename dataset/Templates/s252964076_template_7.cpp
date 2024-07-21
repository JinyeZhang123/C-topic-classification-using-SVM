template<typename T>
inline T sorted(const T &c){
	T d = c;
	return move(sort(d));
}