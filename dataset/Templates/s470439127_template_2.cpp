template<typename Type>
struct minimum : public binary_function<Type, Type, Type>
{
	Type operator() (Type first, Type second)
	{
		return min(first, second);
	}