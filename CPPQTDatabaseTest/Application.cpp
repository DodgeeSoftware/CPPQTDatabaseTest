#include "Application.h"

Application::Application(int argc, char *argv[]) : QApplication(argc, argv)
{
	// Send a Message to the Console
	std::cout << "QT Version: " << QT_VERSION_MAJOR << "." << QT_VERSION_MINOR << std::endl;
	// Show the MainWindow
	this->mainWindow.show();
}


Application::~Application()
{

}
