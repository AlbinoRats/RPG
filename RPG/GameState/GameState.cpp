#include "GameState.h"
GameState::GameState() 
:isRunning(true),
nextState(-1)
{
	
}
bool GameState::isDone()
{
	return !isRunning;
}
void GameState::render()
{

}
void GameState::Update()
{

}