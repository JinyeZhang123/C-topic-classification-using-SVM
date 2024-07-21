template<typename Type>
struct SqrtDecomp {
    int SIZE;
    // node の前半には op2 を適用した値が入っているはずで、
    // 後半には op1 を適用した値が入っているはず

    // lazy は一様更新 → op1 を適用した値が入っているはず
    vector<Type> node, lazy, need_upd;
    Type (*op1) (Type x, Type y, int sz);
    Type (*op2) (Type x, Type y);
    Type I;

    SqrtDecomp( vector<Type> vec,
                Type (*g_op1) (Type x, Type y, int sz),
                Type (*g_op2) (Type x, Type y),
                Type X) {
        int N = vec.size();
        SIZE = 1; while(SIZE * SIZE < N) SIZE++;
        I = X, op1 = g_op1, op2 = g_op2;

        node.resize(SIZE*SIZE + SIZE, I);
        lazy.resize(SIZE, I);
        need_upd.resize(SIZE, 0);

        for(int i=0; i<SIZE; i++) {
            Type rep_val = I;
            for(int j=0; j<SIZE && i*SIZE+j<N; j++) {
                int idx = SIZE + (i*SIZE + j);
                node[idx] = vec[j];
                rep_val = op2(rep_val, node[idx]);
            }