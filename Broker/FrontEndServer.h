#pragma once

#include "common.h"
#include "task.h"

#include <aclapi.h>


class FrontEndServer
{

public:
	FrontEndServer();
	~FrontEndServer();

	BOOL CreatePipe();
	BOOL ClosePipe();
	HANDLE GetListeningSocketHandle();

private:
	HANDLE m_hServerHandle = INVALID_HANDLE_VALUE;
};


_Success_(return) BOOL StartFrontendManagerThread(_In_ LPVOID lpParameter);


#include "taskmanager.h"
#include "Session.h"
#include "CfbException.h"