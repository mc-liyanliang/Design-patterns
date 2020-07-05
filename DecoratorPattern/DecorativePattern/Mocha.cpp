#include "stdafx.h"
#include "Mocha.h"
#include "Beverage.h"
//����-Ħ��
CMocha::CMocha(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
}


CMocha::~CMocha(void)
{
}

CString CMocha::GetDescription() const
{
	return m_pBeverage->GetDescription() + _T(", Mocha");
}

double CMocha::cost()
{
	return 0.2 + m_pBeverage->cost(); //0.2ΪĦ�����ϵļ۸�
}
