template<typename T> int longest_increasing_subsequence(T s){
	vector<int> dp(MAX_S,INF);
	rep(i,s.size()) *lower_bound(all(dp),s[i]) = s[i];
	
	return lower_bound(all(dp),INF)-dp.begin();
}