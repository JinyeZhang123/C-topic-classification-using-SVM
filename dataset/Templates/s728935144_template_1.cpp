template<class T>
class BIT{
private:
    vector<T> sum_of_section_;
    int element_count_;
    T init_;
    
public:
    BIT(int element_count=0 , T init=0):element_count_(element_count) , init_(init) , sum_of_section_(element_count+1,init){}