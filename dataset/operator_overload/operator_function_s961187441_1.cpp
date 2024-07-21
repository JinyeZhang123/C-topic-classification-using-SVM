bool operator<(const brackets &y){
        return max(mnprefix, y.mnprefix-sum) < max(y.mnprefix, mnprefix - y.sum);
    }