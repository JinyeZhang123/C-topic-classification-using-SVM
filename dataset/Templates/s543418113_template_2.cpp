template <class Int>void Print(Int x, char ch = '\0'){
        if(!x)Putchar('0');if(x<0)Putchar('-'),x=-x;while(x)iost[++iotp]=x%10+'0',x/=10;
        while(iotp)Putchar(iost[iotp--]);if (ch)Putchar(ch);
    }