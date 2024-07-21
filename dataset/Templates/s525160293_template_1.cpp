template <typename Type>
struct print_endl : public unary_function < const Type&, void >
{
	void operator()(const Type& n)
	{
		cout << n << endl;
	}