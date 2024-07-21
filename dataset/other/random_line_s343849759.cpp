    for(auto it=prev(S.lower_bound({{b,0},0}));(*it).first.second>a;it=prev(S.erase(it))){
