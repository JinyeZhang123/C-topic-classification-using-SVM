template <typename Element_t, typename Monoid_t, typename Operation_t, typename HomoMorphism_t>
decltype(auto) makeDualSegmentTree(const unsigned int array_size, const Element_t initial_element,
		const Operation_t operate, const Monoid_t identity,
		const HomoMorphism_t homoMorphism
	)
{
	return DualSegmentTree<Element_t, Monoid_t, Operation_t, HomoMorphism_t>
			(array_size, initial_element, operate, identity, homoMorphism);
}