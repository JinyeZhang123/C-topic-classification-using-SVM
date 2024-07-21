bool operator<(const data& d){
    if(ac == d.ac && pn == d.pn){
      return id < d.id;
    }