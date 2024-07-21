template<typename T>
std::ostream& operator<<(std::ostream & os, std::queue<T> q) {
	os << "<";
	while (!q.empty()) { os << q.front(); q.pop(); os << (q.empty() ? "<" : ", "); }