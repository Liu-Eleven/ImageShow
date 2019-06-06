#ifndef IMAGESVIEW_H
#define IMAGESVIEW_H

#include <QFutureWatcher>
#include <QWidget>
#include <QtGui>

class QLabel;
class QPushButton;
class QVBoxLayout;
class QGridLayout;

class ImagesView : public QWidget
{
    Q_OBJECT

public:
    explicit ImagesView(QWidget *parent = 0);
    ~ImagesView();

private slots:
    void open();  // 打开目录，加载图片
    void showImage(int index);  // 显示图片
    void finished();  // 更新按钮状态

private:
    QPushButton *m_pOpenButton;
    QPushButton *m_pCancelButton;
    QPushButton *m_pPauseButton;
    QVBoxLayout *m_pMainLayout;
    QGridLayout *m_pImagesLayout;
    QList<QLabel *> labels;
    QFutureWatcher<QImage> *m_pWatcher;
};

#endif // IMAGESVIEW_H
