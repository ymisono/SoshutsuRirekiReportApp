#pragma once

#ifndef __AFXWIN_H__
#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"
#include <vector>
#include <filesystem>

class CSoshutsuRirekiReportApp : public CWinApp
{
public:
	CSoshutsuRirekiReportApp();

private:
	virtual BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
};

extern CSoshutsuRirekiReportApp theApp;
