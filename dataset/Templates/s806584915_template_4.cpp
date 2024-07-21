template<typename C>
	int find_right(int start, int end, const C check, T checknum, function<T(T, T)> revf) {
		return find< C >(start, end, 0, siz + 1, 0, check, checknum, false, revf);
	}