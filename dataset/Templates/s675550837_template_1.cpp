template <typename Element_t, typename Monoid_t>
class DualSegmentTree {
private:
	using Transformation_t = std::function<Element_t(Element_t)>;
	using HomoMorphism_t = std::function<Transformation_t(Element_t)>;
	using Operation_t = std::function<Monoid_t(Monoid_t, Monoid_t)>;
	
	const Operation_t operate_;
	const Monoid_t identity_;
	const HomoMorphism_t homoMorphism_;
	std::vector<Element_t> element_container_;
	std::vector<Monoid_t> monoid_container_;

	void build(const unsigned int array_size)
	{
		unsigned int length{1}