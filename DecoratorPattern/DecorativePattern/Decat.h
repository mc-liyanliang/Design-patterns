#pragma once
#include "beverage.h"

//�Ϳ���������
class CDecat :
	public CBeverage
{
public:
	CDecat(void);
	virtual ~CDecat(void);
public:
	virtual double cost();
};

