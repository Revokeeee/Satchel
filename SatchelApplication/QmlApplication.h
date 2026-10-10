#pragma	once

#include "IApplication.h"

class QGuiApplication;
class QQmlApplicationEngine;

namespace Satchel
{
	class QmlApplication final : public IApplication
	{
	public:
		QmlApplication(int argc, char* argv[]);
		virtual ~QmlApplication() override;

		int Init() override;
		int Run() override;
	private:
		std::unique_ptr<QGuiApplication> m_Application;
		std::unique_ptr<QQmlApplicationEngine> m_QmlEngine;
		int m_Argc;
		char** m_Argv;
	};
}
