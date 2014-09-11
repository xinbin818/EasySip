/*
 * include/socket.h
 * 
 * Author: Zex <top_zlynch@yahoo.com>
 */
#pragma once

#include <stdexcept>

namespace EasySip
{
	class Except : std::exception
	{
	protected:

		std::string msg_;

	public:

		Except()
		{
		}

		Except(std::string msg)
		: msg_(msg)
		{
		}

		virtual const char* what();
	};
} // namespace EasySip
