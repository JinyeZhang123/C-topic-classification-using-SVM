    ret[i+(1<<n-1)]=(r[i]>>pos)<<(pos+1)|(((B>>pos)&1)<<pos)|(r[i]&((1<<pos)-1));
