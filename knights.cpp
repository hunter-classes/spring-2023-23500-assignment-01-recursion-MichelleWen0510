#include <iostream>
#include <string>
#include "knights.h"

void print(std::string board[5][5])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			std::cout << board[i][j] << ":";
		}
		std::cout << "\n";
	}
	std::cout << "" << std::endl;
}

void solveB(std::string board[5][5], int &step, int row, int col, bool &solved)
{
	if(step==25)
	{
		solved=true;
		return;
	}
	if((col>4 || row>4) || (col<0 || row<0 || board[row][col]!="0"))
	{
		return;
	}
	if(board[row][col]=="0")
	{
		step++;
		board[row][col]=std::to_string(step);
	}

	if(!solved) solveB(board, step, row+1, col-2, solved);
	if(!solved) solveB(board, step, row+2, col-1, solved);
	if(!solved) solveB(board, step, row+2, col+1, solved);	
	if(!solved) solveB(board, step, row+1, col+2, solved);
	if(!solved) solveB(board, step, row-1, col+2, solved);
	if(!solved) solveB(board, step, row-2, col+1, solved);
	if(!solved) solveB(board, step, row-2, col-1, solved);
	if(!solved) solveB(board, step, row-1, col-2, solved);


}
