﻿
// MCESystemDlg.h: 头文件
//

#pragma once


// CMCESystemDlg 对话框
class CMCESystemDlg : public CDialogEx
{
// 构造
public:
	CMCESystemDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MCESYSTEM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString user_id;
	CString user_pwd;
	CButton Button_Login;
	CButton Button_Register;
public:
	afx_msg void Login();
	afx_msg void Register();
};
