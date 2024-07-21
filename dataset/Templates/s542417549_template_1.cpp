template <typename A, typename B>
string to_string(const pair<A, B> &p)
{
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}