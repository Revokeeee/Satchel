#pragma once

#include <string>
#include <filesystem>

namespace Satchel::Log
{
	struct Args
	{
		std::string appName;
		std::filesystem::path logFilePath;
		std::uint16_t maxLogFileSize;
		int maxFiles;
		std::string fileRules;
	};

	void Init(const Args& args);
	void Flush();

	void Shutdown();
}
