#pragma once
class CMapPos
{
public:
	CMapPos();
	~CMapPos();
	bool IsBar();
	void SetBar(bool bIsBar);
private:
	int bIsBar = false;
};

