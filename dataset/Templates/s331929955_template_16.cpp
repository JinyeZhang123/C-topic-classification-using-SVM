template<typename T> struct RMQ_RUQ_Trait {
  using FoldMonoid = minMonoid<T, 2147483647>;
  using ActionMonoid = updateMonoid<T>;
  typename FoldMonoid::value_type apply(typename FoldMonoid::value_type t, typename ActionMonoid::value_type q) { return q.first ? q.second : t; }