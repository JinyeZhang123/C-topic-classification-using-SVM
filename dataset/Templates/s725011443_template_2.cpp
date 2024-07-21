template <typename T>
struct TreeDiam {
private:
    using G = graph<T>;
    int u,v;//直径の両端
    T maxdist;//直径
    void dfs(G &g,int x,int p,int dist) {
    //std::cerr<<"x:"<<x<<std::endl;
        if(dist>maxdist){
            v=x;
            maxdist=dist;
        }