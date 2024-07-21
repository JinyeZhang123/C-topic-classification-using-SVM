template<typename T>
class basic_union_find{
	std::vector<T> data;
public:
	basic_union_find(std::size_t s) :data(s, -1){}