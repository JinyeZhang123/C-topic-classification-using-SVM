Day operator++() {
    ++day;
    if (getMaxDay(year, month) < day) {
      ++month;
      day = 1;
      if (month == 13) {
        ++year;
        month = 1;
      }