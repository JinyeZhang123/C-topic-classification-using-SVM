template <typename Element_t, typename Monoid_t, typename Operation_t, typename HomoMorphism_t>
class DualSegmentTree {
private:
	const Operation_t operate_;
	const Monoid_t identity_;
	const HomoMorphism_t homoMorphism_;
	std::vector<Element_t> element_container_;
	std::vector<Monoid_t> monoid_container_;

	void build(const unsigned int array_size)
	{
		unsigned int length{1}