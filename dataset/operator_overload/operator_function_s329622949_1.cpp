bool operator<(const team &rhs){
        if (solve!=rhs.solve) return solve>rhs.solve;
        if (penalty!=rhs.penalty) return penalty<rhs.penalty;
        return num<rhs.num;
    }