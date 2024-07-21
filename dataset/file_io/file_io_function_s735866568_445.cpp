int main(int argc, char* argv[])
{
	// std::ifstream ifs;
	//ifs.open(argv[1]);

	typedef boost::char_separator<char> char_separator;
    typedef boost::tokenizer<char_separator> tokenizer;
    char_separator sep(" ", "", boost::keep_empty_tokens);	

	int N;
	std::string line;
	std::getline(std::cin, line);
	{
		tokenizer tokens(line, sep);
		tokenizer::iterator tok_iter = tokens.begin();
		N = boost::lexical_cast<int>(*tok_iter);
	}