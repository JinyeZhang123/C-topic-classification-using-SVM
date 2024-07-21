bool operator<(const Node &e,const Node &f){
	return e.cost!=f.cost?e.cost>f.cost:false;
}