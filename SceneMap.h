#pragma once

#include <vector>

#include "MapPos.h"

class CSceneMap
{
public:
	CSceneMap();
	~CSceneMap();
    void InitMapData(int iWidth, int iLength);
    void Clear();
protected:
    int bInit = 0;
	int iWidth = 0;
	int iLength = 0;
	std::vector<CMapPos> lstMap;
};

