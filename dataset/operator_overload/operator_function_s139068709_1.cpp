Data operator+(const Data &other)
  {
    return Data{min(value, other.value)}