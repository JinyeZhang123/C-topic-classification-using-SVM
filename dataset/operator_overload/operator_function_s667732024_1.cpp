bool operator<(const Edge& left,const Edge& right){
	return (left.weight<right.weight?1:0);
}