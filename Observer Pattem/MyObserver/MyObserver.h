
// MyObserver.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyObserverApp:
// �йش����ʵ�֣������ MyObserver.cpp
//

class CMyObserverApp : public CWinApp
{
public:
	CMyObserverApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMyObserverApp theApp;