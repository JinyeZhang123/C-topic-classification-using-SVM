template <class Functor>
    void walk_postorder(Functor F, Node *x) {
        if (x == NULL) return;

        walk_postorder(F, x->left);
        walk_postorder(F, x->right);
        F(x);
    }