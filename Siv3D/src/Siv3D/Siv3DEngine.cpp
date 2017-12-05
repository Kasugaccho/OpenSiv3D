﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include "Siv3DEngine.hpp"
# include "LicenseManager/ILicenseManager.hpp"
# include "Logger/ILogger.hpp"
# include "System/ISystem.hpp"
# include "CPU/ICPU.hpp"
# include "Console/IConsole.hpp"
# include "ImageFormat/IImageFormat.hpp"

namespace s3d
{
	Siv3DEngine::Siv3DEngine()
	{
		pEngine = this;
	}

	Siv3DEngine::~Siv3DEngine()
	{
		m_imageFormat.release();
		m_console.release();
		m_cpu.release();
		m_system.release();
		m_logger.release();
		m_licenseManager.release();

		pEngine = nullptr;
	}
}
