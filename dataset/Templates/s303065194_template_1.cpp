template<typename T>
  T toIntegralType(const string &str) {
      static_assert(is_integral<T>::value, "Integral type required.");
      T ret;
      stringstream ss(str);
      ss >> ret;
      if ( to_string(ret) != str)
          throw invalid_argument("Can't convert " + str);
      return ret;
  }