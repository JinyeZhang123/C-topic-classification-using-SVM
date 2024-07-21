void solve(){
	//ifstream cin("/storage/emulated/0/AppProjects/AtCoder/jni/in.txt");
	while(true){
		cin >> W >> H;
		if(W==0&&H==0) return;
		W2=2*W-1;
		H2=2*H-1;
		for(int i=0; i<MAXW; ++i){
			for(int j=0; j<MAXW; ++j){
				ng[i][j]=0;
				cnt[i][j]=0;
			}