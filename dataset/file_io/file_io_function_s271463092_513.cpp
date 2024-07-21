int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	//fstream fg("0525-input.txt");
	////////////ここから開始///////////
	//fs >> W >> H;
	while (cin >> H >> W, H && W){
		REP(i, M_H)REP(j, M_W)tile[i][j] = 2;
		REP(i, H)REP(j, W){ cin >> tile[i][j]; }