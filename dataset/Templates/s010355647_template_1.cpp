template <class T>
T convertStringToNumber(const string& str) {
	stringstream ss;
	T ret;

	ss << str;
	ss >> ret;

	return ret;
}