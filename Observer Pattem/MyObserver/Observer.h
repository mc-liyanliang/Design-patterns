#pragma once

//CObserver:������
//�ӿ�
class CObserver
{
public:
	CObserver(void);
	virtual ~CObserver(void);
public:
	virtual void Update(double dTemperature,double dTumidity,double dPressure) = 0; //ֻ��һ��Updete����
};

