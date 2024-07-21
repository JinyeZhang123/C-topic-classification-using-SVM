void procStatus() {
	ifstream t("/proc/self/status");
	cerr << string(istreambuf_iterator<char>(t), istreambuf_iterator<char>()) << endl;
}