template<typename C>
    int find(int st,C &check){
        T acc=ti;
        return find(st,check,acc,1,0,n);
    }