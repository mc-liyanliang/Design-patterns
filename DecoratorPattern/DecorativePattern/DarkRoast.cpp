#include "stdafx.h"
#include "DarkRoast.h"


CDarkRoast::CDarkRoast(void)
{
	m_strDescription = _T("DarkRoast�����");
}


CDarkRoast::~CDarkRoast(void)
{
}

double CDarkRoast::cost()
{
	return 0.99;
}
