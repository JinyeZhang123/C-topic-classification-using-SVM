pp operator+(pp a,pp b)
{
  pp ret(a.f+b.f, a.s+b.s);
  return ret;
}