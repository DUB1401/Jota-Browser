#include "Jota Browser.h"

using namespace BROWSER_SPACE;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew BROWSER);
	return 0;
}
