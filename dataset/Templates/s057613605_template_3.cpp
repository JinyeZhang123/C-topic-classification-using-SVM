template <class Functor>
    void walk_inorder(Functor F, size_t x=0) {
        if (!~x) return;

        walk_inorder(F, nodes[x].left);
        F(nodes[x]);
        walk_inorder(F, nodes[x].right);
    }