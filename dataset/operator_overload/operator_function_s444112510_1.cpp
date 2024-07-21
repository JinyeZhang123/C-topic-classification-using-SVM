bool operator<(shop& anot){
        if(a != 0)return a*(anot.b + 1) > anot.a*(b + 1);
        else return b < anot.b;
    }