template <template<class T, class Allocator = allocator<T> > class Container>
double var(Container<double> & x)
{
	double size = x.size();
	double x_mean = mean(x);
	return (inner_product(x.begin(), x.end(), x.begin(), 0.0) - x_mean * x_mean * size)/ size;
}