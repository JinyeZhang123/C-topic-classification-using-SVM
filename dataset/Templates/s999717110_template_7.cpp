template <class t>
void mkuni(vc<t> &v)
{
  sort(all(v));
  v.erase(unique(all(v)), v.ed);
}