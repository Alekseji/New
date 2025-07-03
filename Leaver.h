#pragma once
#include<iostream>
#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif
namespace Leaver
{
	class Leaver
	{
	public:
		
		LEAVER_API std::string leave(std::string name);
	};
}
