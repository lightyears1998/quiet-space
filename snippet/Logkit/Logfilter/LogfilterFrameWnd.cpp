// LogfilterFrameWnd.cpp : implementation file
//

#include "stdafx.h"
#include "LogfilterFrameWnd.h"


// LogfilterFrameWnd

IMPLEMENT_DYNCREATE(LogfilterFrameWnd, CFrameWndEx)

LogfilterFrameWnd::LogfilterFrameWnd()
{
	Create(NULL, TEXT("日志过滤器"), WS_OVERLAPPEDWINDOW, CRect(0, 0, 480, 320));
}

LogfilterFrameWnd::~LogfilterFrameWnd()
{
}


BEGIN_MESSAGE_MAP(LogfilterFrameWnd, CFrameWnd)
END_MESSAGE_MAP()


// LogfilterFrameWnd message handlers
