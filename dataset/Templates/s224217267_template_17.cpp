template<typename T>
std::ostream& operator<<(std::ostream & os, std::stack<T> q) {
	os << ">";
	while (!q.empty()) { os << q.top(); q.pop(); os << (q.empty() ? "]" : ", "); }