template<class Monoid>
    class SegmentTree{
        public: 
        using value_t= typename Monoid::value_t;
        private:
        std::vector<value_t> dat;
        int N;
        static int calcN(int n){int res=1; while(res<n) res*=2; return res;}