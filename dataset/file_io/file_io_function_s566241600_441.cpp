int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	////////////ここから開始///////////


	int x(-1), y(-1);
	while (cin >> y >> x, x && y){
		REP(i, 101)REP(j, 101)tile[i][j] = 'C';
		REP(i, y){
			REP(j, x){
				cin >> tile[i][j];
			//	fs >> tile[i][j];
			}