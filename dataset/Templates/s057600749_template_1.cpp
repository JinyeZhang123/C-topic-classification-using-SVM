template <typename T>
class Lazy_Seg_Tree{
public: // 0-index

	T make_dat_from_buket(T da, T bu, T s){
		return da + bu;
	}