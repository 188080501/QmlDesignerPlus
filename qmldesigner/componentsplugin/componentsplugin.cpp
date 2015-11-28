/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company.  For licensing terms and
** conditions see http://www.qt.io/terms-conditions.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
****************************************************************************/

#include "componentsplugin.h"

#include "tabviewindexmodel.h"
#include "addtabdesigneraction.h"
#include "entertabdesigneraction.h"

#include <viewmanager.h>
#include <qmldesignerplugin.h>

#include <QtPlugin>

#include <QString>
#include <QDebug>
#include <QDir>
#include <QFileInfo>

QString getComponentsPluginMetaInfoFilePath()
{
#if (defined Q_OS_WIN) || (defined Q_OS_MAC)

    do
    {
        qDebug("----- ComponentsPlugin::metaInfo begin -----");
        qDebug() << "Application dir path" << QCoreApplication::applicationDirPath();

        QDir dir(QCoreApplication::applicationDirPath());
#   if (defined Q_OS_MAC)

        if(!dir.cdUp()) { break; }
        if(!dir.cd(QLatin1String("Resources"))) { break; }

#   elif (defined Q_OS_WIN)

        if(!dir.cdUp()) { break; }
        if(!dir.cd(QLatin1String("share"))) { break; }
        if(!dir.cd(QLatin1String("qtcreator"))) { break; }

#   endif

        if(!dir.cd(QLatin1String("qmldesigner"))) { break; }
        if(!dir.cd(QLatin1String("customComponents"))) { break; }

        if(!QFileInfo(dir.path() + QLatin1String("/components.metainfo")).isFile()) { break; }

        qDebug() << "Current metainfo path:" << dir.path() + QLatin1String("/components.metainfo");
        qDebug("----- ComponentsPlugin::metaInfo end -----");

        return dir.path() + QLatin1String("/components.metainfo");
    }
    while(false);
#endif

    return QLatin1String(":/componentsplugin/components.metainfo");
}

namespace QmlDesigner {

ComponentsPlugin::ComponentsPlugin()
{
    TabViewIndexModel::registerDeclarativeType();
    DesignerActionManager *actionManager = &QmlDesignerPlugin::instance()->viewManager().designerActionManager();
    actionManager->addDesignerAction(new AddTabDesignerAction);
    actionManager->addDesignerAction(new EnterTabDesignerAction);
}

QString ComponentsPlugin::pluginName() const
{
    return QLatin1String("ComponentsPlugin");
}

QString ComponentsPlugin::metaInfo() const
{
    return getComponentsPluginMetaInfoFilePath();
}

}

