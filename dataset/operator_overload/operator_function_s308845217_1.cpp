P operator+(const P &p, const P &q)
{
  return P(get<0>(p) + get<0>(q),
           get<1>(p) + get<1>(q));
}