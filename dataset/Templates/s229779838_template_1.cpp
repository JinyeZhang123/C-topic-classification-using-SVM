template <typename T,typename... TS >
void impl(T &head,TS &... tail)
{
  cin>>head;
  impl(tail ...);
}