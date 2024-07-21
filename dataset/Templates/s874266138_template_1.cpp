template<class T>
class SegmentTree2 {
    public:
     
      SegmentTree2(const vector<T>& data, function<T(T,T)> f_, T zero_value = 0) : zv(zero_value), f(f_) {   
          Initialize(data);
      }