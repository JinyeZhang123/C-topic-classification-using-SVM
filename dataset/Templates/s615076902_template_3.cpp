template <class Functor>
    void walk_preorder(Functor F, Node *x) {
        if (x == NULL) return;

        F(x);
        walk_preorder(F, x->left);
        walk_preorder(F, x->right);
    }