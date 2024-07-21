template<typename T>
inline void unique(T &c){ std::sort(std::begin(c), std::end(c)); c.erase(std::unique(all(c)), std::end(c)); }