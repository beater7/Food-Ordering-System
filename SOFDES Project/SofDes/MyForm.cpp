#include "MyForm.h"

using namespace SofDes;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());

	return 0;
}