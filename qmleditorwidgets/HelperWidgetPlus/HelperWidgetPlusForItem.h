#ifndef HelperWidgetPlusForItem_H
#define HelperWidgetPlusForItem_H

#include "qmleditorwidgets_global.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HelperWidgetPlusForItem; }
QT_END_NAMESPACE

namespace QmlJS { class PropertyReader; }

namespace QmlEditorWidgets {

class QMLEDITORWIDGETS_EXPORT HelperWidgetPlusForItem : public QWidget
{
    Q_OBJECT

public:
    explicit HelperWidgetPlusForItem(QWidget *parent = 0);
    ~HelperWidgetPlusForItem();
    void setProperties(QmlJS::PropertyReader *propertyReader);

signals:
    void propertyChanged(const QString &, const QVariant &);
    void removeProperty(const QString &);
    void removeAndChangeProperty(const QString &, const QString &, const QVariant &, bool removeFirst);

private:
    Ui::HelperWidgetPlusForItem *ui;
};

} //QmlDesigner

#endif // HelperWidgetPlusForItem_H
