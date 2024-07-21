template <class value_monoid, class operator_monoid> class lazy_segment_tree{
public:
	typedef typename operator_monoid::underlying_type underlying_type;
	typedef typename value_monoid::value_type value_type;
	size_t n;
	vector<value_type> data;
	vector<underlying_type> lazy;
	value_type e_val = value_monoid::unit();
	underlying_type e_ope = operator_monoid::unit();
	lazy_segment_tree(size_t size){
		n = 1;
		while(n < size) n <<= 1;
		data.resize(2*n, e_val);
		lazy.resize(2*n, e_ope);
	}