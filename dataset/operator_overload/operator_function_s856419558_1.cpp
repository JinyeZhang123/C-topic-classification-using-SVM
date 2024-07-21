bool operator==(BinaryBasis &a){
        normalize(),a.normalize();
        return basis==a.basis;
    }