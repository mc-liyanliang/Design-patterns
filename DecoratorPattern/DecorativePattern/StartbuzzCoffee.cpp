#include "stdafx.h"
#include "StartbuzzCoffee.h"
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "HouseBlend.h"
#include "Soy.h"


CStartbuzzCoffee::CStartbuzzCoffee(void)
{
}


CStartbuzzCoffee::~CStartbuzzCoffee(void)
{
}

void CStartbuzzCoffee::Main()
{
	//��һ��CEspresso��Ũ�����ȣ����ϣ�����Ҫ����
	CBeverage* m_pBeverage = new CEspresso;  
	CString strCost;
	CString strResult;
	strCost.Format(_T("%.2f"), m_pBeverage->cost());
	strResult = m_pBeverage->GetDescription() + _T(" $") + strCost;  //��ӡ������������۸�
	AfxMessageBox(strResult, MB_OK);

	//��һ�� CDarkRoast����� ����
	CBeverage* m_pBeverage2 = new CDarkRoast;  //����� ����    0.99$
	m_pBeverage2 = new CMocha(m_pBeverage2);   //��ӵ���Ħ��װ�� 0.2$
	m_pBeverage2 = new CMocha(m_pBeverage2);   //��ӵ���Ħ��װ�� 0.2$
	m_pBeverage2 = new CWhip(m_pBeverage2);    //��ӵ�������װ�� 0.1$
	strCost.Format(_T("%.2f"), m_pBeverage2->cost());  //=1.49$
	strResult = m_pBeverage2->GetDescription() + _T(" $") + strCost;  //��ӡ������������۸�
	AfxMessageBox(strResult, MB_OK);

	//��һ�� CHouseBlend�ۺϿ��� ����
	CBeverage* m_pBeverage3 = new CHouseBlend; //�ۺϿ��� ����     0.89$                    
	m_pBeverage3 = new CSoy(m_pBeverage3);     //��ӵ��϶���װ��  0.15$
	m_pBeverage3 = new CMocha(m_pBeverage3);   //��ӵ���Ħ��װ��  0.2$
	m_pBeverage3 = new CWhip(m_pBeverage3);    //��ӵ�������װ��  0.1$
	strCost.Format(_T("%.2f"), m_pBeverage3->cost());  //=1.34$
	strResult = m_pBeverage3->GetDescription() + _T(" $") + strCost;  //��ӡ������������۸�
	AfxMessageBox(strResult, MB_OK);

	delete m_pBeverage;
	delete m_pBeverage2;
	delete m_pBeverage3;

}

/*
--�������ϼ۸�--  
HouseBlend �ۺ� 0.89
DarkRoast  � 0.99
Decat      �Ϳ����� 1.05
Espresso   Ũ��  1.99

--���ϼ۸�-- 
Milk  ţ�� 0.10
Mocha Ħ�� 0.2
Soy   ���� 0.15
Whip  ���� 0.10

*/

