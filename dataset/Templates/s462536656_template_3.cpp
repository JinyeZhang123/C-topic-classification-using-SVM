template <class It> SegmentTreeBottomUp(It st, It en)
      : SegmentTreeBottomUp(en - st, [&] { return *st++; }