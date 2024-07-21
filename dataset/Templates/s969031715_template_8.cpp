template<typename T>
inline T reversed(const T &c){
	T d = c;
	return move(reverse(d));
}