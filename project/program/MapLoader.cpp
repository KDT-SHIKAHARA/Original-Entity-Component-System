#include "MapLoader.h"
#include<sstream>
#include<fstream>

/// <summary>
/// �f���~�^�ŕ�������B
/// </summary>
/// <param name="str">		 �t�@�C������ǂݍ��񂾕����� </param>
/// <param name="delimiter"> �ǂݍ��ސ��l�̑O�̂Ƃ���	</param>
/// <returns></returns>
std::vector<MapTile> MapLoader::split(const std::string& str, char delimiter){
	std::vector<MapTile> tmp_mapLine;
	std::istringstream ss(str);
	std::string strBuf;	

	while(std::getline(ss, strBuf, delimiter)) {
		int tmp_id = std::stoi(strBuf);
		tmp_mapLine.push_back({tmp_id, CheckCollision(tmp_id)});
	}

	return tmp_mapLine;
}

/// <summary>
/// �����蔻����s�����ǂ����̔���
/// </summary>
/// <param name="arg_id"> �}�b�v�`�b�v�̔ԍ� </param>
/// <returns>			  true: �����蔻����s�� false: �����蔻������Ȃ� </returns>
bool MapLoader::CheckCollision(int arg_id){
	//	������`��
	return true;
}


/// <summary>
/// �t�@�C���̓ǂݍ���
/// </summary>
/// <param name="mapDataFilePath">  </param>
/// <returns></returns>
MapTiles  MapLoader::Load(const std::string& mapDataFilePath){
	std::ifstream file(mapDataFilePath);
	MapTiles tmp_map;
	std::string line;

	while (std::getline(file, line)) {
		split(line);
	}
	return tmp_map;
}
