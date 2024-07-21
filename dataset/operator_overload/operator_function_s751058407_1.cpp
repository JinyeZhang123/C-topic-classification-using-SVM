bool operator<( node p1, node p2 ){
        if( p1.d == p2.d )
            return p1.c < p2.c;
        return p1.d > p2.d;
    }