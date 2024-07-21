void run(){
	//	ifstream cin("in");
	//	ofstream cout( "out" );
		int N;cin >> N;
		string s;cin >>s;

		int res=0;
		REP(i,N){
			string t;cin >>t;

			bool ok=false;
			REP(span,t.size()){
				for(int spos=0;spos<t.size();spos++){
					int si=0;
					for(int ti=spos;ti<t.size();ti+=span){
						if(s[si]==t[ti]){
							si++;
							if(s.size()==si){
								ok=true;break;
							}