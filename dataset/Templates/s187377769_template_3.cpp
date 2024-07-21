template <template<class T, class Allocator = allocator<T> > class Container>
double sd(Container<double> & x)
{
	return sqrt(var(x));
}