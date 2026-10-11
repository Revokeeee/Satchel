#pragma once

#include <QLoggingCategory>

#define ST_DECLARE_LOG_CATEGORY(name) Q_DECLARE_LOGGING_CATEGORY(name)
#define ST_DEFINE_LOG_CATEGORY(name, tag) Q_LOGGING_CATEGORY(name, tag)

#define ST_DEBUG(msg) qDebug(msg)
#define ST_INFO(msg) qInfo(msg)
#define ST_WARNING(msg) qWarning(msg)
#define ST_ERROR(msg) qCritical(msg)
#define ST_FATAL(msg) qFatal(msg)
