	while(ch >= '0' && ch <= '9') { res = (res << 1) + (res << 3) + ch - '0'; ch = getchar(); }
