template <class InputIt>
      LazySegTree(InputIt first, InputIt last)
      : n(distance(first, last)), h(log(n)), data(2 * n, DM::identity()) {
        copy(first, last, begin(data) + n);
        // たぶん深いところから更新するため
        for(int i = n; i > 0; i--) propToDataOne(i);
      }