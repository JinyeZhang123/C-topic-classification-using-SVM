template<typename T>
class BIT{
    private:
    vector<T> vs;
    int n;

    public: 
    BIT(int n){
        this->vs.assign(n+1, 0);
        this->n = n;
    }