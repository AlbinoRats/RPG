#pragma once
//makes a word has a value glue to it, 
enum STATES
{
	//if no value is assign to it, it increments by 1 from the previous
	SPLASH=0,MENU,GAME
	//MENU will be 1, GAME will be 2
	//starts at 0 by default

};
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