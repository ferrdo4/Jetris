#pragma once

#include <QFrame>
#include <QWidget>

class QLCDNumber;
class QLabel;
class QPushButton;

class JetrisBoard;

class Jetris : public QWidget
{
    Q_OBJECT

public:
    Jetris();

private:
    QLabel *createLabel(const QString &text);

    JetrisBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
};
