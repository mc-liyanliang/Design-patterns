#pragma once
#include "beverage.h"

//Ũ����������
class CEspresso : public CBeverage
{
public:
	CEspresso(void);
	virtual ~CEspresso(void);
public:
	virtual double cost();
};

