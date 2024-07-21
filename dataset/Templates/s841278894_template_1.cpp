template <class BidirectionalIterator>
  inline constexpr bool next_partial_permutation(BidirectionalIterator first,
                                BidirectionalIterator middle,
                                BidirectionalIterator last)
{
  using std::reverse;
  reverse(middle, last);
  return std::next_permutation(first, last);
}