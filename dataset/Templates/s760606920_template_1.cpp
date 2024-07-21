template <typename T>
struct RAQ{// 0-index
	int n,rn,bn; // rn個のかたまりをbn個
	vector<T> data,bucket;
	RAQ(int n_){init(n_);}