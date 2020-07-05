#pragma once
#include "condimentdecorator.h"
class CBeverage;

//ţ�̵���
class CMilk :
	public CCondimentDecorator
{
public:
	CMilk(CBeverage* pBeverage);
	virtual ~CMilk(void);
public:
	virtual CString GetDescription() const;
	virtual double cost();
private:
	CBeverage* m_pBeverage;
};

