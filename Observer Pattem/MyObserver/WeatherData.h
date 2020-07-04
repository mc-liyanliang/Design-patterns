#pragma once
#include "afx.h"
#include <vector>
#include "Observer.h"
#include "Subject.h"

//����������ӵ�����ݵ���
//��CWeatherDataʵ��CSubject�Ľӿ�
class CWeatherData : public CSubject
{
public:
	CWeatherData(void);
	virtual ~CWeatherData(void);
	void Init();
public:
	virtual void RegisterObserver(CObserver* pObserver);
	virtual void RemoveObserver(CObserver* pObserver);
	virtual void NotifyObservers();

	void MeasurementsChanged();
	void SetMeasurements(const double dTemperature,const double dHumitity,const double dPressure);

	double GetTemperature() const;
	double GetHumidity() const;
	double GetPressure() const;
private:
	std::vector<CObserver*> m_pArrObserver;  //�������۲���(������)
	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;

};

