bool operator<(const Point& a, const Point& b) {
  return (abs(a.real() > b.real()) > EPS ? a.real() < b.real() : a.imag() < b.imag()) ;
}