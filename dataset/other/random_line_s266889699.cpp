inline void push(char c){*pp1=c;pp1=(pp1-pbuf==(1<<20)-1)?(fwrite(pbuf,1,1<<20,stdout),pbuf):(pp1+1);}
