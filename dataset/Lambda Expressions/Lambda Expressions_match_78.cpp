[&](const WordFrequency& a, const WordFrequency& b){
        return a.first.size() > b.first.size() ? a : b;
      }