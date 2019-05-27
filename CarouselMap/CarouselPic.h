#pragma once

#include <string>

namespace Gdiplus
{
	class Image;
}

class CarouselPic
{
public:
	CarouselPic();
	~CarouselPic();
	bool LoadPic(std::wstring strFile);
	Gdiplus::Image* GetImage();
	unsigned int GetWidth();
	unsigned int GetHeight();

	// �Ƿ�ѡ��
	bool IsSelect();
	void SetSelect(bool bSel = true);

	void SetLeft(int nX);
	int GetLeft();
	void RightMove();
	void LeftMove();
protected:
	void unInit();
private:
	Gdiplus::Image*  m_pImage;
	bool  m_bInit;
	// �Ƿ�ѡ�У����缤�
	bool  m_bSelect;
	int m_nX;
};

