template<class T,class L>
ostream& operator<<(ostream& os,pair<T,L>& p){ os<<p.first<<" "<<p.second;return os; }