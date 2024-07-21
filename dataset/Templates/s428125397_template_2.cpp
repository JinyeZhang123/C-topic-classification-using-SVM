template<typename INDEX_TYPE, typename VALUE_TYPE, const VALUE_TYPE &Undefined, class Compare = std::less<VALUE_TYPE>>
class RangeMinimumQueryBase {
private:
  std::vector<VALUE_TYPE> segment_tree;
  INDEX_TYPE N, M;

  VALUE_TYPE _min(VALUE_TYPE a, VALUE_TYPE b) const
  {
    return (Compare()(a, b)) ? a : b;
  }