                cost_white[i][j] = loc_white[i+1] - 1 - processed_white.sum(loc_white[i+1] - 1) - processed_black.sum(loc_white[i+1] - 1);
