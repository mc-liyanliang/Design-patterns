#include "stdafx.h"
#include "HouseBlend.h"


CHouseBlend::CHouseBlend(void)
{
	m_strDescription = _T("HouseBlend�ۺϿ�������");
}


CHouseBlend::~CHouseBlend(void)
{
}

double CHouseBlend::cost()
{
	return 0.89;  //�ۺ� �������ϼ۸� 
}
