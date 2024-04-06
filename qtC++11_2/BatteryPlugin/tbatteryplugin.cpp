#include "tbattery.h"
#include "tbatteryplugin.h"

#include <QtPlugin>

TBatteryPlugin::TBatteryPlugin(QObject *parent)
    : QObject(parent)
{
}

void TBatteryPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool TBatteryPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *TBatteryPlugin::createWidget(QWidget *parent)
{
    return new TBattery(parent);
}

QString TBatteryPlugin::name() const
{
    return QLatin1String("TBattery");
}

QString TBatteryPlugin::group() const
{
    return QLatin1String("KKWidgets");
}

QIcon TBatteryPlugin::icon() const
{
    return QIcon(QLatin1String(":/44.ico"));
}

QString TBatteryPlugin::toolTip() const
{
    return QLatin1String("自定义的小窗口");
}

QString TBatteryPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool TBatteryPlugin::isContainer() const
{
    return false;
}

QString TBatteryPlugin::domXml() const
{
    return QLatin1String(R"(<widget class="TBattery" name="tBattery">
</widget>)");
}

QString TBatteryPlugin::includeFile() const
{
    return QLatin1String("tbattery.h");
}
