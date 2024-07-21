template <class T>
std::ostream& operator<<(std::ostream &os, const std::vector<T> &v) {
    os << "[";
	for (int i = 0; i < v.size(); ++i) {
        if (i) {
            if (i % 5 == 0) {
                os << ",\n ";
            }