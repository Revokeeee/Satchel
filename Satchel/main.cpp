#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
	QQmlApplicationEngine qmlEngine;

	qmlEngine.loadFromModule("Satchel.UI", "Main");

	return app.exec();
}
