int main()
{
	//ifstream fin("ALDS1_1_C_in1.txt");

	int n;
	cin >> n;
	cin.ignore();

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}