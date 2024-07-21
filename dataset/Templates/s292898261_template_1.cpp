template <typename T>
ostream& operator<<(ostream& s, const vector<T> &vec){
    for(int i=0;i<vec.size();i++){
        if(i) s << ',';
        else s << '{';
        s <<setw(2)<< vec[i];
    }