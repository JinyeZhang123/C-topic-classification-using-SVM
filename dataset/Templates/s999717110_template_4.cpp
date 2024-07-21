template <class t, size_t n>
ostream &operator<<(ostream &os, const array<t, n> &a)
{
  return os << vc<t>(all(a));
}