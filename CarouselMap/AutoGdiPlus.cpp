#include "stdafx.h"

// ���뱨��ȥ�����
//#undef  WIN32_LEAN_AND_MEAN

#include <gdiplus.h>
#include "AutoGdiPlus.h"

using namespace Gdiplus;

#pragma comment(lib,"gdiplus.lib")

CAutoGdiPlus::CAutoGdiPlus()
{
	Gdiplus::GdiplusStartupInput StartupInput;
	GdiplusStartup(&m_gdiplusToken, &StartupInput, NULL);
}


CAutoGdiPlus::~CAutoGdiPlus()
{
	Gdiplus::GdiplusShutdown(m_gdiplusToken);
}
