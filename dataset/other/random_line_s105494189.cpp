template<class ARY, class T> void FILL(std::vector<std::vector<ARY>>& a, const T& val) { for (auto& b : a) FILL(b, val); }
