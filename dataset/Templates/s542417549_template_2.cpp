template <typename A, typename B, typename C>
string to_string(const tuple<A, B, C> &p)
{
  return "(" + to_string(std::get<0>(p)) + ", " + to_string(std::get<1>(p)) + ", " + to_string(std::get<2>(p)) + ")";
}