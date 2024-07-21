template <typename T> void unique(T& c){c.erase(std::unique(c.begin(), c.end()), c.end());}
