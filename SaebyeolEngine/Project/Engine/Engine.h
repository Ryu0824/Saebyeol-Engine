#pragma once

class Engine : public Singleton<Engine>
{
	Single(Engine)

private:
	WindowInfo m_Info;

public:
	HWND GetHwnd() { return m_Info.Hwnd; }
	Vec2 GetRes() { return m_Info.vRes; }
	void SetRes(const Vec2& _vRes) { m_Info.vRes = _vRes; }

public:
	void AdjustWindow();
	void ResizeWindow();

private:
	void AwakeManager();

public:
	int Awake(const WindowInfo& _winInfo);
	void Update();

};