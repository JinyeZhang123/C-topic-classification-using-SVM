template<typename T>
inline T& reverse(T &c){
	reverse(all(c));
	return c;
}