#pragma once
#include <memory>

namespace Satchel::Log
{

	class LogEngine
	{
	public:
		explicit LogEngine();
		~LogEngine();
		void Flush();

		LogEngine(const LogEngine&) = delete;
		LogEngine& operator=(const LogEngine&) = delete;
		LogEngine(LogEngine&&) = delete;
		LogEngine& operator=(LogEngine&&) = delete;

	private:
		void Init();
		void Shutdown();

	private:
		std::unique_ptr<struct LogEngineImpl> m_impl;
	};
}
