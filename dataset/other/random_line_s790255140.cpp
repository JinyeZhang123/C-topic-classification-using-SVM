        fix(w += (i64)v*pw[m-i]%P), fix(ans += (i64)v*w%P*pw[i+1]%P), v = v*iv[i+1]%P*(m-i)%P;
