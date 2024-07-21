bool operator==(const NODE r){
		if(solve != r.solve) return false;
		if(score != r.score) return false;
		return true;
	}