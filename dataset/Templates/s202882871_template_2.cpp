template<class T>
vector<interval<T>> interval_union(vector<interval<T>> I){
	sort(I.begin(),I.end(),[](const interval<T>& a,const interval<T>& b){ return a.l<b.l; }