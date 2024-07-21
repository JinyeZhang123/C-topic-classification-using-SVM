template <typename Arg1>

void _er(const char* name, Arg1&& arg1){
	cerr << "[" << name << " : " << arg1 << "]" << endl;
}