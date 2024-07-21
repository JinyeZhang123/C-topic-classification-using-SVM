int main(){
	init();

	//debug
	/*
	ifstream in("input.in");
	streambuf *cinbuf = std::cin.rdbuf();
	cin.rdbuf(in.rdbuf());

	ofstream out("out.txt");
	streambuf *coutbuf = std::cout.rdbuf();
	cout.rdbuf(out.rdbuf());
	*/
	//end debug

	cin >> n >> m >> k;
	int x, y;
	FOR(i, 0, n){
		FOR(j, 0, m){
			cin >> arr[i][j];
			if(arr[i][j] == 'S'){
				x = i;
				y = j;
			}