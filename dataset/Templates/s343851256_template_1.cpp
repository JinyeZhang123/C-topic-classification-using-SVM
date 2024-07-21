template <class Functor>
void walk_preorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    F(root);
    for (const Edge &e: g[root])
        walk_preorder(g, e.dst, F);
}