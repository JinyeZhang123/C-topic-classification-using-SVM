template<typename flow_type> struct Dinic{

    struct edge{
        int to, rev;
        flow_type cap;
        edge(int t, int r, flow_type c): to(t), rev(r), cap(c){}