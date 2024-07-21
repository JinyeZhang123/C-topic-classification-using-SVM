template <class Functor>
    void walk_inorder(Functor F, Node *x) {
        if (x == NULL) return;

        walk_inorder(F, x->left);
        F(x);
        walk_inorder(F, x->right);
    }