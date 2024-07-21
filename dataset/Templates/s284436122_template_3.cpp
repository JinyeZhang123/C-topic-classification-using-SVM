template<typename T>
    class RMQ{
    private:
        int Pow2Fit(int _n){
            int d = 1;
            while((d << 1) <= _n) d <<= 1;
            return d;
        }