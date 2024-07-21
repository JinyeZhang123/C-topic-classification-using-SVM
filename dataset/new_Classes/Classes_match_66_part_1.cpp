class BigInt {
private:
	vector<int> number;
public:
	BigInt(string s) {
		for (int i = s.size() - 1; i >= 0; i--) {
			number.push_back(s[i] - '0');
		}                                               