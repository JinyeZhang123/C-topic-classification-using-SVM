template<typename V>
constexpr string join(const V &v, const string &sep) {
  stringstream ss;
  if (v.size()) ss << v[0];
  loop(i, 1, v.size()) ss << sep << v[i];
  return ss.str();
}