template <class X>
void unique_vector(std::vector<X> &t)
{
  std::sort(t.begin(), t.end());
  t.erase( std::unique(t.begin(), t.end()), t.end() );
}