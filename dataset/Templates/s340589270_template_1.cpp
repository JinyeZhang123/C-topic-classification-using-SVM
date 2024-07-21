template<typename Monoid, typename OperatorMonoid = Monoid>
class lazy_segment_tree {
	using value_type = Monoid;
	using operator_type = OperatorMonoid;
	using size_type = size_t;

	using F = std::function<value_type (value_type, value_type)>;
	using G = std::function<value_type (value_type, operator_type, int, int)>;
	using H = std::function<operator_type (operator_type, operator_type)>;
	
	size_type size_;
	size_type height_;

	F f;
	G g;
	H h;
	value_type id;
	operator_type id_op;
	std::vector<value_type> data;
	std::vector<operator_type> lazy;
	std::vector<size_type> depth;
	
	const size_type get_height(const size_type& size) const {
		size_type height = 1;
		while(1 << height < size) height++;
		return height;
	}