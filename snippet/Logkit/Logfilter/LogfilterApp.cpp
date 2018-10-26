#include "stdafx.h"
#include "LogfilterApp.h"
#include "LogfilterFrameWnd.h"


IMPLEMENT_DYNCREATE(LogfilterApp, CWinAppEx)


LogfilterApp::LogfilterApp()
{
}

LogfilterApp::~LogfilterApp()
{
}

BOOL LogfilterApp::InitInstance()
{
	m_pMainWnd = new LogfilterFrameWnd();
	m_pMainWnd->ShowWindow(m_nCmdShow);
	return TRUE;
}

int LogfilterApp::ExitInstance()
{
	// 退出程序前的清理工作
	return CWinAppEx::ExitInstance();
}

BEGIN_MESSAGE_MAP(LogfilterApp, CWinAppEx)
END_MESSAGE_MAP()


// LogfilterApp message handlers
