#include "stdafx.h"
#include "MuteQuack.h"
#include <iostream>
#include <afxwin.h>

CMuteQuack::CMuteQuack(void)
{
}


CMuteQuack::~CMuteQuack(void)
{
}

void CMuteQuack::Quack()
{
	AfxMessageBox(_T("�����!"), MB_OK);

}
