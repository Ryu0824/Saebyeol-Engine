#pragma once

struct Vec2
{
	float x;
	float y;
};

struct WindowInfo
{
	HWND Hwnd;
	Vec2 vRes;
	bool bWindowed;
};