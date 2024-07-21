bool operator<( node p1, node p2 ){
        if( p1.dis == p2.dis )
            return p1.mon < p2.mon;
        return p1.dis > p2.dis;
    }