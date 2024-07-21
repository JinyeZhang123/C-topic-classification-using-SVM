template <typename T>
class Lazy_Seg_Tree{
public: // 0-index
  // buketは区間変更の値  datは区間の答え
	T make_dat_from_buket(T da, T bu, T s){//dat[k] = make_dat_from_buket(dat[k],buket[k],r-l);
		return bu;
	}