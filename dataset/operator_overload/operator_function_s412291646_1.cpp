bool operator<(const team& a){
    if(ac == a.ac){
      if(sec == a.sec) return id < a.id;
      return sec > a.sec;
    }