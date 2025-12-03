#include "pch.h"
#include "Engine.h"

#include "TimeMgr.h"

Engine::Engine()
	:m_Info{}
{

}

Engine::~Engine()
{

}

void Engine::AdjustWindow()
{
}

void Engine::ResizeWindow()
{
}

void Engine::AwakeManager()
{
}

int Engine::Awake(const WindowInfo& _winInfo)
{
	m_Info = _winInfo;

	AwakeManager();

	return S_OK;
}

void Engine::Update()
{

}