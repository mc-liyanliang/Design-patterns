
// CMyStrategyDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CCMyStrategyDlg �Ի���
class CCMyStrategyDlg : public CDialogEx
{
// ����
public:
	CCMyStrategyDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CMYSTRATEGY_DIALOG };

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
public:
	CButton m_Test;
	afx_msg void OnBnClickedButtonTest();
};
