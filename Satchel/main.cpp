#include "IApplication.h"

int main(int argc, char *argv[])
{
	auto app = Satchel::MakeSatchel(argc, argv);
	return app->Run();
}
