template <typename T>
std::vector<std::vector<T>> read_input() {
    std::string input_str;

    std::getline(std::cin, input_str);
    std::istringstream iss(input_str);
    T width, height;
    iss >> width >> height;

    std::vector<std::vector<T>> input_vec(height, std::vector<int>(width, 0));

    for (size_t i = 0; i < height; i++) {
        std::getline(std::cin, input_str);
        for (size_t j = 0; j < width; j++) {
            if (input_str.at(j) == 'W') {
                input_vec.at(i).at(j) = 1;
            }