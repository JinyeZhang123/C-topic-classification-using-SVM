template<typename V>
constexpr string join(const V &v, const string &sep) {
  stringstream ss;
  if (v.size()) ss << v[0].se;
  loop(i, 1, v.size()) ss << sep << v[i].se;
  return ss.str();
}