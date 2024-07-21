bool operator<(const Team& lhs, const Team& rhs){
		return lhs.score > rhs.score || (lhs.score == rhs.score && 
			(lhs.time < rhs.time ||
			(lhs.time == rhs.time && lhs.team > rhs.team)));
	}