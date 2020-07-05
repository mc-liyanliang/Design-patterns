#pragma once
#include "condimentdecorator.h"
class CBeverage;

//���ݵ���
class CWhip :
	public CCondimentDecorator
{
public:
	CWhip(CBeverage* pBeverage);
	virtual ~CWhip(void);
public:
	virtual CString GetDescription() const;
	virtual double cost();
private:
	CBeverage* m_pBeverage;
};

