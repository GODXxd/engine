#pragma once

#include "Interface.hpp"

namespace My {
	class IRunTimeModule {
		public:
			virtual ~IRunTimeModule() {};

			virtual int Initialize() = 0;			//用于初始化模块
			virtual void Finalize() = 0;			//用于在模块结束时，打扫战场

			virtual void Tick() = 0;				//用于让驱动模块驱动该模块执行的。每调用一次，模块进行一个单位的处理
	};
}