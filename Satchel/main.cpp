#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
	QQmlApplicationEngine qmlEngine;

	qmlEngine.loadFromModule("Satchel.UI", "Mains");

	return app.exec();
}
