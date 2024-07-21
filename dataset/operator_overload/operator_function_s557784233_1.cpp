bool operator<(const Edge &e,const Edge &f){
	return e.weight!=f.weight?e.weight>f.weight:
		e.from!=f.from?e.from<f.from:e.to<f.to;
}