void run(){
		// ifstream cin("D2");
//		ofstream cout( "D2.out" );
		
		while(true){
			int W,H;cin >> W >> H;if(W==0 && H ==0)break;
			vector<string> board(H);
			REP(y,H)cin >> board[y];

			vector<vector<bool>> passed(H,vector<bool>(W));
			queue<pair<int,int>> que;
			REP(y,H)REP(x,W){
				if(board[y][x]=='@'){
					que.push(make_pair(y,x));
				}