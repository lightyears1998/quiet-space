#include "stdafx.h"
#include "LogfilterFrameWnd.h"


IMPLEMENT_DYNCREATE(LogfilterFrameWnd, CFrameWndEx)


LogfilterFrameWnd::LogfilterFrameWnd()
{
	CenterWindow();

	Create(NULL, TEXT("日志过滤器"), WS_OVERLAPPEDWINDOW, CRect(0, 0, 800, 600));
	listCtrl.Create(WS_CHILD|WS_VISIBLE, CRect(0, 0, 320, 480), this, 1);
}

LogfilterFrameWnd::~LogfilterFrameWnd()
{
}


BEGIN_MESSAGE_MAP(LogfilterFrameWnd, CFrameWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()


void LogfilterFrameWnd::OnPaint()
{
	CPaintDC dc(this);
	CRect rect; GetClientRect(&rect);
	dc.DrawText(TEXT("Happy new year!"), rect, 0);
}
