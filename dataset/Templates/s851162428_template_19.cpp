template <class T>
struct RangeSegTrees
{
	template<class TUpdater, class TResolver, class TAccumulator>
	struct Tree
	{
		Tree(int count, TUpdater updater, TResolver resolver, TAccumulator accumulator, T initialValue)
			: size(msb(count - 1) << 1)
			, data(size * 2), lazy(size * 2)
			, updater(updater), resolver(resolver), accumulator(accumulator), initialValue(initialValue)
		{
			lazy[1] = { true, initialValue }