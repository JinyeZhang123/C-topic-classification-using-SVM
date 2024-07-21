bool operator==(Team t) {
    if (ac != t.ac) return false;
    if (pe != t.pe) return false;
    return true;
  }