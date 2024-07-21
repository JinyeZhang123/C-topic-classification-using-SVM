int main(){
	using namespace std;

	//ifstream fin;
	//fin.open("input.txt");

	int n;
	int count;

	while (true){
		n = count = 0;

		cin >> n;
		if (n == 0)break;
		for (int i = n; i <= 2 * n - 1; i+=2){
			if (i == 1 || i == 2)count++;
			if (i % 2 == 0)i++;
			if (isPrime(i))count++;
		}