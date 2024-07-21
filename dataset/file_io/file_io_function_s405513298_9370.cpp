void input()
{
#ifdef DEBUG_BUILD
    std::ifstream ifs("Comp\\input.txt");
    if (!ifs)
    {
        cerr << "Error: file not opened." << endl;
        return;
    }