bool operator==(const Dice other) {
    bool res = true;
    for (int knock=1;knock<=100;knock++) {
      res = true;
      for (int i=0;i<6;i++)
        if (other.value[i] != this->value[i])
          res = false;
      if (res)
        break;
      else {
        if (knock % 5 == 0) {
          if (knock / 5 <= 3) {
            this->roll('N');
          }