#ifndef ABSTRACTCALIBRATOR_H
#define ABSTRACTCALIBRATOR_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QVector>

#include <math.h>

class AbstractCalibrator : public QWidget
{
Q_OBJECT
public:
    explicit AbstractCalibrator(QWidget *parent = 0);
    ~AbstractCalibrator();

    virtual void set(const QVector<float>& data)=0;

public slots:
    void channelChanged(float raw);

protected:
    QLabel *pulseWidth;

    QVector<float> *log;
    float logExtrema();
    float logAverage();
};

#endif // ABSTRACTCALIBRATOR_H
