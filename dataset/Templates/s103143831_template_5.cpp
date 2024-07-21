template <typename T> // deque
ostream& operator<<(ostream& os, deque<T> &q){for(auto it=q.begin();it<q.end();it++){
os<<*it;if(it+1!=q.end())os<<" ";}