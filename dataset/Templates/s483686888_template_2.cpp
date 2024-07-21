template<class T>
class Fenwick {
	private:
		std::vector<T> arr;
		int sz;
		T myQuery(int idx) {
			T rt{}