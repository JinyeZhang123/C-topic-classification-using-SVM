template<class T>
struct MonoidSegTree {
  int n;
  int size;
  vector<T> seg;

  MonoidSegTree(const vector<T> A) {
    n = A.size();

    size = 1;
    while (size < n) size *= 2;
    
    seg.resize(size);
    seg.insert(seg.end(), A.begin(), A.end());
    seg.resize(size*2);
    for (int i=size-1; i>0; --i) seg[i] = seg[i*2] * seg[i*2+1];
  }