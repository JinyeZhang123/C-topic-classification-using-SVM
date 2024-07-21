template<typename C, typename FT>
	int find_left(int start, int end, const C check, T checknum, FT revf) {
		return find< C, FT >(start, end, 0, siz + 1, 0, check, checknum, true, revf);
	}