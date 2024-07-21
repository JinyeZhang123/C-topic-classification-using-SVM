template <typename T>
class lazy_segment_tree{
    private:
        static int calc_size(int n){
            int m = 1;
            while(m < n){
                m *= 2;
            }