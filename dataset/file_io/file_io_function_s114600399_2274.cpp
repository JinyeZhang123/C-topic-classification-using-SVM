void run(){
	//	ifstream cin("in");
	//	ofstream cout( "out" );
		string str;cin >>  str;
		int N=str.size();

		int Mv=0;
		for(int i=0;i<N;){
			// JOJOI
			int jlv=0;while(i<N && str[i]=='J')i++,jlv++;
			int olv=0;while(i<N && str[i]=='O')i++,olv++;
			int ilv=0;while(i<N && str[i]=='I')i++,ilv++;
			if(olv<=min(jlv,ilv))
				Mv=max(Mv,olv);
		}