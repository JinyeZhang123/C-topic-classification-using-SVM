template <typename Ite>
  LazySegmentTree(size_t N, T et, E ee, F operation, G affecter, H merger,
                  Ite start, Ite end)
      : et(et), ee(ee), operation(operation), affecter(affecter),
        merger(merger) {
    init(N);
    build(start, end);
  }