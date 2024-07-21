template<char start, int C>
struct Trie {
	struct Node {
		vector<int> nxt, accept;
		int exist;
		Node() : exist(0) { nxt.assign(C, -1); }