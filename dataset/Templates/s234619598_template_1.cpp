template<typename T, int M>
struct RMQ {
    T arr[M];
    T INF;
    int N;
    
    RMQ(int N_, T INF_) {
        INF = INF_;
        for (int j = 0; j < M; ++j) {
            arr[j] = INF;
        }