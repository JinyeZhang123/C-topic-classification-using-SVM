bool test_file_exists(const std::string& str)
{
    std::ifstream fs(str);
    return fs.is_open();
}