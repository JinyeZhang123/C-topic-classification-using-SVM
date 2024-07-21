template<typename Monoid>
struct Lazy_Segment_Tree{
    Monoid f(Monoid a, Monoid b){
        return a+b;
    }