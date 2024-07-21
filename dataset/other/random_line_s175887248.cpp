      if (A.at(i) > 0) sum += lower_bound(A.begin(), A.end(), (long double) mid / A.at(i)) - A.begin();
