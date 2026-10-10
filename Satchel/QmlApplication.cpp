#include "QmlApplication.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>

#include <memory>

namespace Satchel
{


	std::unique_ptr<IApplication> MakeSatchel(int argc, char* argv[])
	{
		return std::make_unique<QmlApplication>(argc, argv);
	}


	QmlApplication::QmlApplication(int argc, char* argv[])
		: m_Argc(argc), m_Argv(argv)
	{
		Init();
	}

	QmlApplication::~QmlApplication()
	{

	}

	int QmlApplication::Init()
	{
		m_Application = std::make_unique<QGuiApplication>(m_Argc, m_Argv);
		m_QmlEngine = std::make_unique<QQmlApplicationEngine>();

		m_QmlEngine->loadFromModule("Satchel.UI", "Main");

		return 0;
	}

	int QmlApplication::Run()
	{
		m_Application->exec();
		return 0;
	}
}