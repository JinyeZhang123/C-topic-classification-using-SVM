[&](const WordFrequency& a, const WordFrequency& b){
        return a.second > b.second ? a : b;
      }