#pragma once
#include "beverage.h"

//�ۺ� ��������
class CHouseBlend :
	public CBeverage
{
public:
	CHouseBlend(void);
	virtual ~CHouseBlend(void);
	virtual double cost();
};

