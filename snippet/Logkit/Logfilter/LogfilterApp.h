#pragma once


/// <summary>
/// 日志过滤器APP
/// </summary>
class LogfilterApp : public CWinAppEx
{
	DECLARE_DYNCREATE(LogfilterApp)


public:
	LogfilterApp();
	virtual ~LogfilterApp();

	virtual BOOL InitInstance();
	virtual int ExitInstance();


protected:
	DECLARE_MESSAGE_MAP()


private:
	CFrameWnd wnd;
};
