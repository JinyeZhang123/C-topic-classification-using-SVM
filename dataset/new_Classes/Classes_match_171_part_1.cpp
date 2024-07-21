class GameStatus{
public:
	int score;
	int out;
	queue<int> base;

	GameStatus(){
		score = 0;
		out = 0;
		for (int i = 0; i < 3; i++)
			base.push(0);
	}                                             