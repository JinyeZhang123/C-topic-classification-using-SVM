int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	////////////ここから開始///////////
	int n(0);
	cin >> n;
	while (n--){
		bool f = false;
		REP(i, 10){
			cin >> balls[i];
			ar[i] = 0;
		}