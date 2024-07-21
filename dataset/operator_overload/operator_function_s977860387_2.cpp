pa operator-(const pa & l,const pa & r) {   
    return {l.first-r.first,l.second-r.second}