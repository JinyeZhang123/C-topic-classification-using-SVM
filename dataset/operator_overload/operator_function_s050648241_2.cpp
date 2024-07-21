bool operator<(team_t &team) {
    if (this->get_corrects() == team.get_corrects()) {
      if (this->get_penalty() == team.get_penalty()) {
        return id > team.id;
      }