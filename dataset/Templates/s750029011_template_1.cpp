template<class T>
class BIT{
private:
    vector<T> sum_of_section_;
    int elements_count_;
    T init_;
    
public:
    BIT(int elements_count=0 , T init=0):elements_count_(elements_count*2),init_(init),sum_of_section_(elements_count*2+1,0){
        for(int i=0;i<elements_count_;i++){
            add(i+1,init);
        }