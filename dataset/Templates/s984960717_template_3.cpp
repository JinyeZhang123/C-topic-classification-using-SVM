template<typename C, typename T>
void erase(C& c, T t) { remove(ALL(c), t), c.end(); }