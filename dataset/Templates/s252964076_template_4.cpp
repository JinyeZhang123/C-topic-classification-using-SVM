template<typename T>
inline T& sort(T &c){
	sort(all(c));
	return c;
}