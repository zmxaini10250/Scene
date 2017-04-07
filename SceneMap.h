#pragma once

#include <vector>

#include "MapPos.h"

class CSceneMap
{
public:
	CSceneMap();
	~CSceneMap();
private:
	int iWidth = 0;
	int iLength = 0;
	std::vector<CMapPos> lstMap;
};

