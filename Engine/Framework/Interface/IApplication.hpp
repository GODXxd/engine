#pragma once

#include "Interface.hpp"
#include "IRunTimeModule.hpp"

namespace My {
	class IApplication : public IRunTimeModule
	{
		public:
			virtual int Initialize() = 0;
			virtual void Finalize() = 0;

			virtual void Tick() = 0;

			virtual bool IsQuit() = 0;
	};
}