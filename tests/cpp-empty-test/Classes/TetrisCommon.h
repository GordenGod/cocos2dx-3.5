#ifndef  __TETRIS_COMMON_H__
#define __TETRIS_COMMON_H__
#include "cocos2d.h"
using namespace cocos2d;

#pragma  once

//ÿ������ĳ��ȺͿ��
const int C_W_RECT = 12;
const int C_H_RECT = 12;

const int C_W_RECT_2 = 5;
const int C_H_RECT_2 = 5;



//����������
const int C_ROW = 20;
const int C_COLUMN = 20;

const int C_ROW_BOTTOM = C_ROW;

const int C_SPACE = 1;
const int C_SPACE_TETRIS = 1;//����˹����֮��ľ���

//��ɫ
const Color4B myColor4BOrange = Color4B(255, 127, 0, 255);

//��ɫ
const Color4B myColor4BCyan = Color4B(0, 255, 255, 255);
//���
const Color4B myColor4BOlive = Color4B(128, 128, 0, 255);
//����
const Color4B myColor4BSilver = Color4B(192, 192, 192, 255);

//������������ɫ
const Color4B myColor4BBlueViolet = Color4B(138, 43, 226, 255);
//������
const Color4B myColor4BDeepSkyBlue = Color4B(0, 191, 255, 255);

//
const Color4B myColor4BDeepAqua = Color4B(60, 179, 113, 255);

//
const Color4B myColor4BYellow= Color4B(255, 255, 0, 255);

enum TetrisKind
{
	E_1,//��
	E_2_1,//��ֱ��
	E_2_2,//��ֱ��
	E_3_1,//L��̬1
	E_3_2,//L��̬2
	E_3_3,//L��̬3
	E_3_4,//L��̬4
	E_4_1,//������̬1
	E_4_2,//������̬2
	E_5_1,//����̬1
	E_5_2,//����̬2
	E_5_3,//����̬3
	E_5_4,//����̬4
};

struct Block
{
	bool is_block;//��ǰ�����Ƿ��з���
	int row;
	int column;
	void copy(const struct Block& b)
	{
		is_block = b.is_block;
		row = b.row;
		column = b.column;
	}
};

typedef Block(*BlocksPointer)[C_COLUMN];

void CopyAllBlocks(BlocksPointer src, BlocksPointer dest);
//{
//	for (int i = 0; i < C_ROW; i++)
//	{
//		for (int j = 0; j < C_COLUMN; j++)
//		{
//			dest[i][j].copy(src[i][j]);
//		}
//	}
//}

#endif