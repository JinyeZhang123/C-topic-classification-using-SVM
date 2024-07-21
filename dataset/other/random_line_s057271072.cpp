    REP(i,n) ans[(i+2)%n][i] = ans[(i+2)%n][i+(i%2?-1:1)] = id, id+=2;
