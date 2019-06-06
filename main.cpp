#include "imagesview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImagesView w;
    w.show();

    return a.exec();
}
