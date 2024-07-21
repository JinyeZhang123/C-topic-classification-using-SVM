template <typename IndexMap> void setRoot(It root, IndexMap& m) {
    ASSERT(root != end_);
    root_ = *root;
    if (begin_ != root) {
      left_ = make_unique<Node>(begin_, root);
      for (auto c = begin_; c != root; ++c) {
        m[*c] = left();
      }