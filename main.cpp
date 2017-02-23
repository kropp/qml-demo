#include <QApplication>
#include <QtQml>
#include <QtQuick/QQuickView>

int main(int argc, char *argv[]) {
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine(":/main.qml", &app);

    return app.exec();
}