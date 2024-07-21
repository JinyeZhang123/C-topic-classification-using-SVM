void run(){
		// ifstream cin("D2");
//		ofstream cout( "D2.out" );
		
		while(true){
			string str;cin >> str;if(str==".")break;

			int res=0;
			REP(p,3)REP(q,3)REP(r,3){
				P=p;Q=q;R=r;
				Cursor c=str.begin();
				int val=expression(c);
				if(val==2)res++;
			}