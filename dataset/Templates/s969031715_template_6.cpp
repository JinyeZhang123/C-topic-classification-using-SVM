template<typename T>
inline T& unique(T &c){
	sort(all(c));
	c.erase(unique(all(c)), end(c));
	return c;
}