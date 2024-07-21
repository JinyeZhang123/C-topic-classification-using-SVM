class SSF {
private:
	void ScanLine(std::vector<std::string> *map, const char lx, const char rx, const char y, const char oy, std::array<std::queue<char>, 4> *buffer) {
		unsigned char i = lx;
		while