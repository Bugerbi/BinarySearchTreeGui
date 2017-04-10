#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include "binarysearchtree.h"

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);
    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;
    void zoomIn();
    void zoomOut();

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private:
    BinarySearchTree<int> bst;
    double scale;
    QPen pen;
    QBrush brush;
    void autoSize();
};

#endif // RENDERAREA_H
