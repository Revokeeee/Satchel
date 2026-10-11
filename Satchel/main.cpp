#include "IApplication.h"
#include "SatchelBase/LogEngine.h"

int main(int argc, char *argv[])
{
	auto logEngine = Satchel::Log::LogEngine();

	if (auto app = Satchel::MakeSatchel(argc, argv))
	{
		return app->Run();
	}
	return -1;
}
