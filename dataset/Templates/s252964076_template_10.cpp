template<typename T, size_t N>
struct print_tuple {
	static void print(const T &t, ostream &os){
		print_tuple<T, N - 1>::print(t, os);
		os << " " << get<N - 1>(t);
	}