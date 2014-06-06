class GameState
{
protected:
	bool isRunning;
	int nextState;
public:
	GameState();
	bool isDone();
	int getNextState();
	virtual void Update()=0;//set it to pure
	virtual void render()=0;//set it to pure
};