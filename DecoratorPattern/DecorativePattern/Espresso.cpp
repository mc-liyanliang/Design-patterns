#include "stdafx.h"
#include "Espresso.h"


CEspresso::CEspresso(void)
{
	m_strDescription = _T("Espreso");
}


CEspresso::~CEspresso(void)
{
}

double CEspresso::cost()
{
	return 1.99;  //Ũ�������������ϵļ۸�
}
