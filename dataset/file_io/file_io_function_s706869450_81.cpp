int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");

#endif

	int a, b;
	string op;


	while (true)
	{
		cin >> a >> op >> b;

		if (op[0] == '?') break;

		switch (op[0]){
		case '+':
		{
					cout << a + b << endl;
					break;

		}