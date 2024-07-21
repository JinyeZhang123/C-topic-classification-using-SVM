bool operator<(const Node& a, const Node& b) {
		return a.min_cost > b.min_cost;
	}