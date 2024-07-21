template<typename T>
Pt<T> operator+(Pt<T> a, Pt<T> b) {
  return {a.x + b.x, a.y + b.y}