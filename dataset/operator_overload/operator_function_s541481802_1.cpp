bool operator<(const P& lhs, const P& rhs) {
    return (lhs.real() == rhs.real()) ? (lhs.imag() < rhs.imag()) : (lhs.real() < rhs.real());
  }