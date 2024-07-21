#define GC (p1==p2&&(p1=buf,p2=buf+fread(buf,1,1<<20,stdin),p1==p2)?0:(*(p1++)))
