void proc_status() {
	ifstream t("/proc/self/status");
	cerr << string(istreambuf_iterator<char>(t), istreambuf_iterator<char>()) << endl;
}