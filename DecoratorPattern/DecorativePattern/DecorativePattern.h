
// DecorativePattern.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDecorativePatternApp:
// �йش����ʵ�֣������ DecorativePattern.cpp
//

class CDecorativePatternApp : public CWinApp
{
public:
	CDecorativePatternApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDecorativePatternApp theApp;