template<typename Type>
struct SqrtDecomp {
    int SIZE;
    vector<Type> node, bucket, lazy, need_upd;
    Type (*op1) (Type x, Type y, int sz);
    Type (*op2) (Type x, Type y);
    Type I_op1, I_op2;

    SqrtDecomp( vector<Type> vec,
                Type (*g_op1) (Type x, Type y, int sz),
                Type (*g_op2) (Type x, Type y),
                Type X_op1, Type X_op2) {
        int N = vec.size();
        SIZE = 1; while(SIZE * SIZE < N) SIZE++;
        op1 = g_op1, op2 = g_op2;
        I_op1 = X_op1, I_op2 = X_op2;

        node.resize(SIZE*SIZE, I_op2);
        bucket.resize(SIZE, I_op2);
        lazy.resize(SIZE, I_op1);
        need_upd.resize(SIZE, 0);

        for(int i=0; i<SIZE; i++) {
            Type rep_val = I_op2;
            for(int j=0; j<SIZE && i*SIZE+j<N; j++) {
                int idx = (i*SIZE + j);
                node[idx] = vec[idx];
                rep_val = op2(rep_val, node[idx]);
            }