template<class First, class... Rest>
void set_args_con(const First& first, const Rest&... rest) {
	stringstream ss;
	ss << first;
	argment_contents.push(ss.str());
	set_args_con(rest...);
}