#include <iostream>
#include <string>
#include "knights.h"

int main()
{
	int step = 0;
	bool solved = false;
	std::string board[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			board[i][j]="0";
		}
	}
	solveB(board,step,0,0,solved);
	print(board);

	step = 0;
        solved = false;
        for(int i=0;i<5;i++)
        {
        	for(int j=0;j<5;j++)
                {
                        board[i][j]="0";
                }
        }
        solveB(board,step,2,2,solved);
	print(board);
}
