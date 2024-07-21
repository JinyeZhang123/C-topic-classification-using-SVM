P operator+(const P &le, const P &ri){
	P ret = {le.first + ri.first, le.second + ri.second}