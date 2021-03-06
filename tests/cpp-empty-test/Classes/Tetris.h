#ifndef __TETRIS_H__
#define __TETRIS_H__

#include "TetrisCommon.h"

//extern Block g_marks[C_ROW][C_COLUMN];


class Tetris
{
public:
	Tetris();
	~Tetris();
	static Tetris* Create(TetrisKind kind);
	void Convert();
	void Transform();
	void ConvertOnEnter();
	void ConvertOnExit();
	void Down();
	void Left();
	void Right();
	bool DownOk();
	bool LeftOk();
	bool RightOk();
	bool Ok();
	bool EdgeOk();
	bool IsBottom();
	bool CleanUp();
	void setKind(TetrisKind kind){ m_kind = kind; }
	TetrisKind getKind(){ return m_kind; }
	void setSpeed(const int& speed){ m_speed = speed; }
	int getSpeed(){ return m_speed; }
	void set(Block*[10]){};

	void setBlocksPointer(BlocksPointer tmp);
	BlocksPointer getBlocksPointer(){ return m_marks; };

	bool isBlock(int row, int column);
	void setMarksBlock(const int& row, const int& column);

private:
	Block m_block;
	TetrisKind m_kind;
	int m_speed;
	Block m_marks[C_ROW][C_COLUMN];
private:
	//no copy
	Tetris(const Tetris&);
	Tetris& operator=(const Tetris&);
private:
	
};




#endif // !__TETRIS_H__

