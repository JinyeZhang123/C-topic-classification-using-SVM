bool operator<(const P &a, const P &b){
    return real(a)==real(b)?imag(a)<imag(b):real(a)<real(b);
  }