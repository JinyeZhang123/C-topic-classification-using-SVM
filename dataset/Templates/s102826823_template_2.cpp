template <typename Monoid_t, typename Operation_t, typename HomoMorphism_t>
decltype(auto) makeDualSegmentTree(
		const unsigned int array_size,
		const Operation_t operate, const Monoid_t identity,
		const HomoMorphism_t homoMorphism
	)
{
	return DualSegmentTree<Monoid_t, Operation_t, HomoMorphism_t>(
			array_size, operate, identity, homoMorphism
		);
}