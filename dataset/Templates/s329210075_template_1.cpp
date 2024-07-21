template<class T>
class UF{
private:
    vector<T> par,rank;
    //    vector<int> size;
    int _size;
    int groups;
public:
    
    UF(int __size):_size(__size) , par(__size) , rank(__size,0) ,groups(1){
        for(int i=0;i<__size;i++)par[i]=i;
    }