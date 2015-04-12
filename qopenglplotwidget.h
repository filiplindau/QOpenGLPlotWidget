#ifndef QOPENGLPLOTWIDGET_H
#define QOPENGLPLOTWIDGET_H

#include <QObject>
#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QVector3D>
#include <QColor>

class QOpenGLPlotWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit QOpenGLPlotWidget(QWidget* parent = 0);
    ~QOpenGLPlotWidget();

    void setAxisColor(QColor bkgColor);
    QColor getAxisColor();

private:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    QMatrix4x4 mProjection;

    void drawPolyLine();
    void drawLine( double x1, double y1, double x2, double y2, //coordinates of the line
        float w,			//width/thickness of the line in pixel
        float Cr, float Cg, float Cb,	//RGB color components
        float Br, float Bg, float Bb,	//color of background when alphablend=false,
                        //  Br=alpha of color when alphablend=true
        bool alphablend);		//use alpha blend or not

    void drawAxes();

    QColor backgroundColor;
    QColor axisColor;
    QColor curveColor;

signals:

public slots:

};
#endif // QOPENGLPLOTWIDGET_H
