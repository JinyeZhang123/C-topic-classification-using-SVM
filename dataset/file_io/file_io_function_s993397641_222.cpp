int main(){
	using namespace std;

	//ifstream fin;
	//fin.open("input.txt");

	int a, d, n;
	int count;
	bool isFinished;

	a = d = n= 0;
	while (true){

		isFinished = false;
		count = 0;

		cin >> a >> d >> n;

		if (n == 0)break;

		while (!isFinished){
			if (isPrime(a)){
				count++;
			}