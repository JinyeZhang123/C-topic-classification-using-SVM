template<typename T>
struct print_tuple<T, 1> {
	static void print(const T &t, ostream &os){
		os << get<0>(t);
	}