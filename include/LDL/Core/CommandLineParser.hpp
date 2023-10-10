#ifndef LDL_Core_CommandLineParser_hpp
#define LDL_Core_CommandLineParser_hpp

#include <vector>
#include <string>

namespace LDL
{
	namespace Core
	{
		class CommandLineParser
		{
		public:
			CommandLineParser(size_t argc, char* argv[]);
			const std::vector<std::string>& Lines();
		private:
			std::vector<std::string> _Lines;
		};
	}
}

#endif