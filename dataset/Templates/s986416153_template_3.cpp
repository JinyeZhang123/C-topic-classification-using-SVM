template< class flow_type >
struct Dinic {
    const flow_type inf;
    struct edge {
        int to;
        flow_type cap;
        int rev;
        edge(int to, flow_type cap, int rev) : to(to), cap(cap), rev(rev) {}