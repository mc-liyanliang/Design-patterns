
// CMyStrategy.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCMyStrategyApp:
// �йش����ʵ�֣������ CMyStrategy.cpp
//

class CCMyStrategyApp : public CWinApp
{
public:
	CCMyStrategyApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCMyStrategyApp theApp;