#pragma once

//���ϳ�����
class CBeverage
{
public:
	CBeverage(void);
	virtual ~CBeverage(void);
	void Init();
public:
	virtual double cost() = 0;
	virtual CString GetDescription() const;
protected:
	CString m_strDescription;
};

/*
--�������ϼ۸�--  
�ۺ� 0.89
� 0.99
�Ϳ����� 1.05
Ũ��  1.00

--���ϼ۸�-- 
ţ�� 0.10
Ħ�� 0.2
���� 0.15
���� 0.10

*/

