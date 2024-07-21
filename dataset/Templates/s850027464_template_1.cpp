template<class T>
class prique :public std::priority_queue<T, std::vector<T>, std::greater<T>> {}