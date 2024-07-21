Cost operator[](Pos pos){
        if (data.find(pos)!=data.end()) return data[pos];
        else                      return infcost;
    }