bool operator<(const NODE r){
		if(solve != r.solve) return solve < r.solve;
		if(score != r.score) return score > r.score;
		return n < r.n;
	}