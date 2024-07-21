template<typename T>
T min_diff(const vector<T> &v, T x) {
	auto u = upper_bound(v.begin(), v.end(), x);
	if (u == v.begin())return v.front() - x;
	if (u == v.end())return x - v.back();
	return min(*u - x, x - *(u - 1));
}