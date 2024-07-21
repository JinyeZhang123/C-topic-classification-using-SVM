template <class Functor>
void walk_postorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    for (const Edge &e: g[root])
        walk_postorder(g, e.dst, F);

    F(root);
}