
// MyObserverDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include <memory>
#include "WeatherData.h"


// CMyObserverDlg �Ի���
class CMyObserverDlg : public CDialogEx
{
// ����
public:
	CMyObserverDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MYOBSERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();

	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CButton m_BtnObserver;
public:
	afx_msg void OnBnClickedButtonObserver();
public:
	CWeatherData* m_pWeatherData;

};
