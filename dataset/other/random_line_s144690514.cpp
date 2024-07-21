				dp.at(i).at(j) = min(abs(i - j), dp.at(i + 1).at(j + 1) + 1);
