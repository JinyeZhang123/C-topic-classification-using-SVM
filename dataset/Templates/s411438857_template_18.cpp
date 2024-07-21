template <typename ... Args>
void debugPrintf(const char* format, Args const& ... args) {
	fprintf(stderr, format, args ...);
	fflush(stderr);
}