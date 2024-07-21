template<typename T>
vector<T> osa_k(T n,const vector<T>& min_factor){//min_factorはsieveで求めた配列を使う
  vector<T> ret;
  while(n>1){
		if(ret.empty()||min_factor[n]!=ret.back())ret.push_back(min_factor[n]);
		n/=min_factor[n];
	}