int main(){

	ifstream fin("in.txt");

	typedef list<int>::iterator Iterator;

	list <int> stock;
	list<int> tmp;

	int n = 0, r = 0;
	int p = 0, c = 0;
	
	while (true){

		cin >> n >> r;
		if (n == 0 && r == 0)break;

		//?????????
		stock.clear();
		tmp.clear();
		for (int i = 1; i <= n; i++){
			stock.push_back(n - i + 1);
		}