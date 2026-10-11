#pragma once

#include <QLoggingCategory>

#define ST_DECLARE_LOG_CATEGORY(name)
Q_DECLARE_LOGGING_CATEGORY(name)
#define ST_DEFINE_LOG_CATEGORY(name, tag) Q_LOGGING_CATEGORY(name, tag)

#define ST_DEBUG(msg) qCDebug(msg)
#define ST_INFO(msg) qCInfo(msg)
#define ST_WARNING(msg) qCWarning(msg)
#define ST_ERROR(msg) qCCritical(msg)
#define ST_FATAL(msg) qCCritical(msg)


