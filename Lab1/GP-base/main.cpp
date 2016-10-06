#include <QApplication>
#include <QGLFormat>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QGLFormat glFmt;
  glFmt.setVersion(3, 3);
  glFmt.setProfile(QGLFormat::CompatibilityProfile);
  QGLFormat::setDefaultFormat(glFmt);
  MainWindow w;
  w.show();
	
  return a.exec();
}
