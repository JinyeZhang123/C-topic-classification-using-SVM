template<typename T>
T GCD(T a, T b) 
{
	if (a < b)swap(a, b);
	int r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}