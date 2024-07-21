    std::next(std::find_if(songs.begin(), songs.end(), [&](const song& song) { return song.s == X; })),
