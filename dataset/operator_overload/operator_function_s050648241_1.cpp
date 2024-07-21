bool operator==(team_t &team) {
    if (this->get_corrects() == team.get_corrects()) {
      return this->get_penalty() == team.get_penalty();
    }