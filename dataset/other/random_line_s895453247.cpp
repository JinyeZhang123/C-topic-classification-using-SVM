		if (!x) putc ('0'); if (x < 0) putc ('-'), x = -x;while(x) qu[++ qr] = x % 10 + '0',  x /= 10;while (qr) putc (qu[qr--]);}
