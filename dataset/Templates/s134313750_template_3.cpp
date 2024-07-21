template<typename T>
struct LazySegmentTree{//区間更新,区間最小,0オリジン
    private:
        int n;
        vector<T>node,lazy;
        vector<bool>flag;
        const T inf=numeric_limits<T>::max();
    
    public:
        LazySegmentTree(vector<T>v){
            int sz=(int)v.size();//vをinfで初期化して渡すこと
            n=1;
            while(n<sz)n*=2;
            node.resize(2*n-1);
            lazy.resize(2*n-1,inf);
            flag.resize(2*n-1,false);

            for(int i=0;i<sz;i++)node[i+n-1]=v[i];
            for(int i=n-2;i>=0;--i)node[i]=min(node[2*i+1],node[2*i+2]);
        }