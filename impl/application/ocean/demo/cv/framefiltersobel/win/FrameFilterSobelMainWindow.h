/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef FACEBOOK_APPLICATION_OCEAN_DEMO_CV_FRAME_FILTER_SOBEL_WIN_FRAME_FILTER_SOBEL_MAIN_WINDOW_H
#define FACEBOOK_APPLICATION_OCEAN_DEMO_CV_FRAME_FILTER_SOBEL_WIN_FRAME_FILTER_SOBEL_MAIN_WINDOW_H

#include "ocean/base/Frame.h"
#include "ocean/base/Worker.h"

#include "ocean/media/FrameMedium.h"

#include "ocean/platform/win/ApplicationWindow.h"
#include "ocean/platform/win/BitmapWindow.h"

using namespace Ocean;

/**
 * This class implements a main window.
 * @ingroup applicationdemocvframefiltersobelwin
 */
class FrameFilterSobelMainWindow :
	virtual public Platform::Win::BitmapWindow,
	virtual public Platform::Win::ApplicationWindow
{
	public:

		/**
		 * Creates a new main window.
		 * @param instance Application instance
		 * @param name The name of the main window
		 * @param file Optional media file
		 */
		FrameFilterSobelMainWindow(HINSTANCE instance, const std::wstring& name, const std::string& file = std::string());

		/**
		 * Destructs the main window.
		 */
		~FrameFilterSobelMainWindow() override;

	protected:

		/**
		 * Event function if the windows has been initialized successfully.
		 * @see Window::onInitialized().
		 */
		void onInitialized() override;

		/**
		 * Function called by the windows message loop if the process is idling.
		 * @see Window::onIdle().
		 */
		void onIdle() override;

		/**
		 * Function for keyboard button down events.
		 * @see Window::onKeyDonw().
		 */
		void onKeyDown(const int key) override;

		/**
		 * Event function if a new frame has arrived.
		 * @param frame New frame
		 */
		void onFrame(const Frame& frame);

	protected:

		/// 0 degree frame window.
		Platform::Win::BitmapWindow frameWindow0_;

		/// 90 degree frame window.
		Platform::Win::BitmapWindow frameWindow90_;

		/// 45 degree frame window.
		Platform::Win::BitmapWindow frameWindow45_;

		/// 135 degree frame window.
		Platform::Win::BitmapWindow frameWindow135_;

		/// Magnitude frame window.
		Platform::Win::BitmapWindow frameWindowMagnitude_;

		/// Magnitude frame window.
		Platform::Win::BitmapWindow frameWindowMagnitudeAverage_;

		/// Media object.
		Media::FrameMediumRef frameMedium_;

		/// Most recent frame timestamp.
		Timestamp frameTimestamp_;

		/// Worker object.
		Worker worker_;

		/// Optional media file to be used.
		std::string mediaFile_;

		/// State determining whether the frame timestamp will be ignored.
		bool ignoreTimestamp_ = false;
};

#endif // FACEBOOK_APPLICATION_OCEAN_DEMO_CV_FRAME_FILTER_SOBEL_WIN_FRAME_FILTER_SOBEL_MAIN_WINDOW_H
