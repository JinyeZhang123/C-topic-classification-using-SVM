	auto result  = std::minmax_element(words.begin(), words.end(), [](const sipair & a, const sipair & b) { return a.first.length() < b.first.length(); });
