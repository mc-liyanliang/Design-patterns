#include "stdafx.h"
#include "Decat.h"


CDecat::CDecat(void)
{
	m_strDescription = _T("Decat�Ϳ���������");
}


CDecat::~CDecat(void)
{
}

double CDecat::cost()
{
	return 1.05;
}
