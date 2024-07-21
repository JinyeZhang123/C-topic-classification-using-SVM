template <class Arg1, class... Args>
	void __f(const char* names, Arg1&& arg1, Args&&... args) {
		const char* sep = strchr(names + 1, ',');
		cerr.write(names, sep - names) << " : " << arg1 << "  ";
		__f(sep + 1, args...);
	}