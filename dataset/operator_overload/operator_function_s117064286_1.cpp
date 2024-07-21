type operator<<(Ostream& os,  const Cont& v){
    os<<"[";
    for(auto& x:v){os<<x<<", ";}