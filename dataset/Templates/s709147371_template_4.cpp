template <class Functor>
    void walk_preorder(Functor F, size_t x=0) {
        if (!~x) return;

        F(nodes[x]);
        walk_preorder(F, nodes[x].left);
        walk_preorder(F, nodes[x].right);
    }