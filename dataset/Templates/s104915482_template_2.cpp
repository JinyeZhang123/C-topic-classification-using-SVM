template <typename T>
vector<T> getSumVec(vector<T> vec){
    vector<T> values(vec.size()+1,0);
    for(ll i=0;i<values.size()-1;i++){
      values.at(i+1) = values.at(i) + vec.at(i);
    }