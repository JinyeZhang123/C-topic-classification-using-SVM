void run(){
		//  ifstream cin("B.in");
		// ofstream cout( "B.out" );
		
		while(true){
			int n;cin >> n;if(n==0)break;

			int M;cin >> M;
			vector<int> xs(M),ys(M);
			REP(i,M)cin >> xs[i] >> ys[i];
			

			vector<int> res;
			REP(i,n){
				int m;cin >> m;
				vector<int> xs2(m),ys2(m);
				REP(j,m)cin >> xs2[j] >> ys2[j];
				if(m!=M)continue;
				
				{
					REP(d,4){
						bool ok=true;
					
						int px1=xs[0],py1=ys[0],px2=xs2[0],py2=ys2[0];
						for(int j=1;j<M;j++){
							if(d==0 && (px1-xs[j]!=px2-xs2[j] || py1-ys[j]!=py2-ys2[j]) ){
								ok=false;
							}