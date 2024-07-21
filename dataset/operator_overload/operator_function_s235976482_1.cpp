OperatorMonoid operator[](int k){
        thrust(k+=n);
        return laz[k];
    }