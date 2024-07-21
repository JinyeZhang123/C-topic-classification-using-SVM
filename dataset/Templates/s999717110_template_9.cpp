template <class t>
int lwb(const vc<t> &v, const t &a)
{
  return lower_bound(all(v), a) - v.bg;
}