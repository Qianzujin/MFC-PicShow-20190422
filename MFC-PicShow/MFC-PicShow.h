
// MFC-PicShow.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCPicShowApp: 
// �йش����ʵ�֣������ MFC-PicShow.cpp
//

class CMFCPicShowApp : public CWinApp
{
public:
	CMFCPicShowApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCPicShowApp theApp;