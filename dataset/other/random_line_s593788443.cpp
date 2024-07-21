inline char getChar() { return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, BUF, stdin), p1 == p2) ? EOF : *p1++; }
