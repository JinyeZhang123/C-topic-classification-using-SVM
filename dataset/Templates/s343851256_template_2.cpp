template <class Functor>
void walk_inorder(const Graph &g, size_t root, Functor F) {
    if (root >= g.size()-1) return;

    walk_inorder(g, g[root][0].dst, F);
    F(root);
    walk_inorder(g, g[root][1].dst, F);
}