template<class T> bool contain(const std::string& s, const T& v) {
   return s.find(v) != std::string::npos;
}