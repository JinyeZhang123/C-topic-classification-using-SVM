int main(){
//	ifstream fin("in.txt");

	int n = 0;
	int count = 0;

	while (true){
		count = 0;

		cin >> n;
		if (n == 0)break;

		for (int i = n + 1; i <= 2 * n; i++)
			if (isPrime(i))count++;

			cout << count << endl;
	}