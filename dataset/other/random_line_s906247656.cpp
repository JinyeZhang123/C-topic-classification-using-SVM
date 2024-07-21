	tree[u] = std::max(tree[u << 1], tree[u << 1 | 1]);
