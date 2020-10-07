﻿#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QMainWindow>
#include "chooselevelscene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainScene; }
QT_END_NAMESPACE

//主页场景页面（第一个页面）
class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    //重新paintEvent事件 画背景图
    void paintEvent(QPaintEvent *);

    ChooseLevelScene * chooseScene = NULL;

private slots:
    void on_actionQuit_triggered();

private:
    Ui::MainScene *ui;
};

#endif // MAINSCENE_H
