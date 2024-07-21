template <class T>
class Matrix {
    public:
        Matrix(int h,int w,T u = 1) : mHeight(h), mWidth(w), mUnit(u) {
            mData.assign(h,vector<T>(w));
        }