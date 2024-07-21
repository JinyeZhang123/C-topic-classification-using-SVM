#define RSumQ(n) SimpleSegTree([](SimpleSegTree::Type a, SimpleSegTree::Type b){ return a + b; }, n, 0);
