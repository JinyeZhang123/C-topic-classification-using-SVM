bool operator==(const cake& c1){
		rep(i,4){
			if(x[i] != c1.x[i]){
				return false;
			}