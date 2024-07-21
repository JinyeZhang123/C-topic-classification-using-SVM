int main()
{
	ifstream ifp("c:\\temp\\small-practice.in");
	ofstream ofp("c:\\temp\\res.out");
	istream & input = cin;
	ostream & output = cout;


	// p1
	if ( false)
	{
		int a, b;
		input >> a;
		input >> b;
		if (a + b == 15)
			output << "+";
		else if (a * b == 15)
			output << "*";
		else
			output << "x";
	}