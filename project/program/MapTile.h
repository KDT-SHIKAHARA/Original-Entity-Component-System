#pragma once

/// <summary>
/// 1�^�C���̃N���X
/// �^�C���̃}�b�v�ԍ��Ɠ����蔻����s�����ǂ����̃t���O������
/// </summary>
struct MapTile{
	int tileID_;	//	�}�b�v�̔ԍ�
	bool isCollision_;	//	�����蔻�肷�邩�ǂ���
	MapTile(int arg_tileID = 0,bool arg_isCollision =false)
		:tileID_(arg_tileID), isCollision_(arg_isCollision){}
};