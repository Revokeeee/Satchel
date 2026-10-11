#pragma once

#include <memory>

namespace Satchel
{
	class IApplication
	{
	public:
		IApplication() = default;
		virtual ~IApplication() = default;

		virtual int Init() = 0;
		virtual int Run() = 0;
	};

	std::unique_ptr<IApplication> MakeSatchel(int argc, char* argv[]);
}
