#include "LogEngine.h"

#include <QLoggingCategory>
#include <iostream>


namespace Satchel::Log
{
	namespace
	{
		void massageHandler(QtMsgType type, const QMessageLogContext& context, const QString& msg)
		{
			std::string logMessage = msg.toStdString();
			switch (type) {
			case QtDebugMsg:
				std::cout << "[  DEBUG   ] " << logMessage << std::endl;
				break;
			case QtInfoMsg:
				std::cout << "[   INFO   ] " << logMessage << std::endl;
				break;
			case QtWarningMsg:
				std::cout << "[ WARNING  ] " << logMessage << std::endl;
				break;
			case QtCriticalMsg:
				std::cerr << "[ CRITICAL ] " << logMessage << std::endl;
				break;
			case QtFatalMsg:
				std::cerr <<"[   FATAL   ] " << logMessage << std::endl;
				abort();
			}
		}
	}

	struct LogEngineImpl
	{
		QtMessageHandler handler = nullptr;
	};

	LogEngine::LogEngine()
		: m_impl(std::make_unique<LogEngineImpl>())
	{
		Init();
	}

	LogEngine::~LogEngine()
	{
		Shutdown();
	}

	void LogEngine::Init()
	{
		m_impl->handler = qInstallMessageHandler(massageHandler);
	}

	void LogEngine::Flush()
	{

	}

	void LogEngine::Shutdown()
	{
		qInstallMessageHandler(m_impl->handler);
	}

}
