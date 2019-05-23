#pragma once

#include "Interface.hpp"

namespace My {
	class IRunTimeModule {
		public:
			virtual ~IRunTimeModule() {};

			virtual int Initialize() = 0;			//���ڳ�ʼ��ģ��
			virtual void Finalize() = 0;			//������ģ�����ʱ����ɨս��

			virtual void Tick() = 0;				//����������ģ��������ģ��ִ�еġ�ÿ����һ�Σ�ģ�����һ����λ�Ĵ���
	};
}