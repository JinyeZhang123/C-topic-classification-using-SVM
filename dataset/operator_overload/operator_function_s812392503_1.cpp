bool operator<(const Restaurant& rhs) {
    if (this->name != rhs.name) {
      return this->name < rhs.name;
    }