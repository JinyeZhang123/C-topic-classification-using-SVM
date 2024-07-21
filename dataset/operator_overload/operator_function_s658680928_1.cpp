bool operator<(const NODE r){
		if(solve != r.solve) return solve < r.solve;
		else if (score != r.score) return score > r.score;
		else return num > r.num;
	}