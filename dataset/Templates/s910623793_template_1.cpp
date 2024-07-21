template <class operator_monoid> class dual_segment_tree{
public:
	typedef typename operator_monoid::underlying_type underlying_type;
	typedef typename operator_monoid::value_type value_type;
	size_t n;
	vector<underlying_type> v;
	vector<value_type> w;
	underlying_type e = operator_monoid::unit();
	dual_segment_tree(size_t size){
		n = 1;
		while(n < size) n <<= 1;
		v.resize(2*n, e);
		w.resize(size, operator_monoid::default_value());
	}