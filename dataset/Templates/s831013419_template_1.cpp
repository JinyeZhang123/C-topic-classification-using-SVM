template <typename T>
std::vector<std::vector<T>> read_input() {
    std::string input_str;

    std::getline(std::cin, input_str);
    int arr_size = std::stoi(input_str);
    std::vector<std::vector<T>> input_vec(arr_size, std::vector<int>(2, 0));

    for (size_t i = 0; i < arr_size; i++) {
        std::getline(std::cin, input_str);
        std::istringstream iss(input_str);
        T begin, end;
        iss >> begin >> end;

        // this is for myself
        begin -= 1;
        end -= 1;
        input_vec.at(i).at(0) = begin;
        input_vec.at(i).at(1) = end;
    }