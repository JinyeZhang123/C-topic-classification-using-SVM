virtual ~Graph(){
		for(auto i=v.begin();i!=v.end();i++){
			delete *i;
		}