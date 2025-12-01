#pragma once

class Engine : public Singleton<Engine>
{
	Single(Engine)

private:
	WindowInfo info;

public:
	HWND GetHwnd() { return info.Hwnd; }
	Vec2 GetRes() { return info.vRes; }
	void SetRes(const Vec2& _vRes) { info.vRes = _vRes; }

public:
	void AdjustWindow();
	void ResizeWindow();

private:
	void AwakeManager();

public:
	int Awake(const WindowInfo& _winInfo);
	void Update();

};