#pragma once


// ADD_DLG 对话框

class ADD_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_DLG)

public:
	ADD_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name1;
	CString number1;
	CString major1;
	CString sex1;
	CString birth;
	double phone1;
	CString home1;
	CString pic1;
};
