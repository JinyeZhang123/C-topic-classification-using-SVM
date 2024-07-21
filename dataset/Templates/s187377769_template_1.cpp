template <template<class T, class Allocator = allocator<T> > class Container>
double mean(Container<double> & x)
{
	return accumulate(x.begin(), x.end(), 0.0) / x.size();
}