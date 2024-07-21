class D3
{
public:
	long double X , Y , Z , EPS;

	D3(long double , long double , long double);
	bool operator== (D3 Partner);
	D3 operator*(long double);
	D3 operator/(long double);
}