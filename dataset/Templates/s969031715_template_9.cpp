template<typename T>
inline T uniqued(const T &c){
	T d = c;
	return move(unique(d));
}