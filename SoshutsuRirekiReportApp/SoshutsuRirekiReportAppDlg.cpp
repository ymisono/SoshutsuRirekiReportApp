#include "stdafx.h"
#include "SoshutsuRirekiReportApp.h"
#include "SoshutsuRirekiReportAppDlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CSoshutsuRirekiReportAppDlg::CSoshutsuRirekiReportAppDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SOSHUTSURIREKIREPORTAPP_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSoshutsuRirekiReportAppDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

void CSoshutsuRirekiReportAppDlg::Initialize()
{
}



BEGIN_MESSAGE_MAP(CSoshutsuRirekiReportAppDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

BOOL CSoshutsuRirekiReportAppDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	SetIcon(m_hIcon, TRUE);
	SetIcon(m_hIcon, FALSE);

	// 初期化
	{
		_tsetlocale(LC_ALL, _T(""));
		Initialize();
	}

	return TRUE;
}

void CSoshutsuRirekiReportAppDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// クライアントの四角形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンの描画
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

HCURSOR CSoshutsuRirekiReportAppDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CSoshutsuRirekiReportAppDlg::PreTranslateMessage(MSG* pMsg)
{
	// ESCキー or Enterキー 押下でダイアログが閉じないようにする
	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)
		{
		case VK_RETURN:
		{
			return FALSE;
		}
		case VK_ESCAPE:
		{
			return FALSE;
		}
		default:
		{
			break;
		}
		}
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}
