template<typename T>
int get_longest_steps(it_type first, it_type last) {
	int result;
	if (*first == 0) {
		result = get_longest_steps_0(first, last);
	}