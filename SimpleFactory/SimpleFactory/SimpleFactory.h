
// SimpleFactory.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSimpleFactoryApp:
// �йش����ʵ�֣������ SimpleFactory.cpp
//

class CSimpleFactoryApp : public CWinApp
{
public:
	CSimpleFactoryApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSimpleFactoryApp theApp;