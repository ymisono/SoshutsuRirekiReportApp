#pragma once

class CSoshutsuRirekiReportAppDlg : public CDialogEx
{
private:
	HICON m_hIcon;

public:
	CSoshutsuRirekiReportAppDlg(CWnd* pParent = nullptr);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SOSHUTSURIREKIREPORTAPP_DIALOG };
#endif

private:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual void DoDataExchange(CDataExchange* pDX);

	/*
	CSoshutsuRirekiReportApp で設定ファイルを読み込んで、設定値をセットする。
	CSoshutsuRirekiReportAppDlg では CSoshutsuRirekiReportApp の設定値を読み込んで、
	入出力ディレクトリなどを制御する。
	*/
	void Initialize();
};
