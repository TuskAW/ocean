/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "application/ocean/demo/tracking/homographytracker/win/HomographyTrackerMain.h"
#include "application/ocean/demo/tracking/homographytracker/win/HomographyTrackerMainWindow.h"

#include "ocean/base/Build.h"
#include "ocean/base/RandomI.h"

#include "ocean/platform/Utilities.h"

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPTSTR lpCmdLine, int /*nCmdShow*/)
{
	RandomI::initialize();

	try
	{
		HomographyTrackerMainWindow mainWindow(hInstance, std::wstring(L"oceandemohomographytracker, ") + String::toWString(Build::buildString()), Platform::Utilities::parseCommandLine(lpCmdLine));
	}
	catch(...)
	{
		ocean_assert(false && "Uncaught exception!");
	}

	return 0;
}
