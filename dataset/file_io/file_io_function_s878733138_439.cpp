int main()
{
	cin.tie(0); ios::sync_with_stdio(false); 
	//fstream fs("input.txt");
	////////////ここから開始///////////

	
	int x(-1), y(-1);
	while (true){
		REP(i, 20)REP(j, 20)tile[i][j] = '#';
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		//fs >> x >> y;
		REP(i, y){
			REP(j, x){
				cin >> tile[i][j];
				//fs >> tile[i][j];
			}