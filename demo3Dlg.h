
// demo3Dlg.h: 头文件
//

#pragma once


// Cdemo3Dlg 对话框
class Cdemo3Dlg : public CDialogEx
{
	int nSize = 5;
	void IncSize();

	SOCKET socket_serv;
	sockaddr_in si;

// 构造
public:
	Cdemo3Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DEMO3_DIALOG };
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
public:
	afx_msg void OnBnClickedBtnshow();
	afx_msg void OnBnClickedButtonProgress();
	afx_msg void OnBnClickedButtonIp();
	afx_msg void OnBnClickedButtonFile();
	afx_msg void OnBnClickedButtonDlg();
	afx_msg void OnBnClickedButtonSend();
	afx_msg void OnBnClickedButtonServ();
};
