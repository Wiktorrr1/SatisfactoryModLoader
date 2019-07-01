#include <stdafx.h>
#include "Coremods.h"
#include <Windows.h>
#include <string>
#include <filesystem>
#include <util/Utility.h>

namespace SML {
	namespace Mod {
		void startLoadingCoremods(const char* currentPath) {
			std::string appPath(currentPath);
			size_t pos = appPath.find_last_of('\\');
			CreateDirectoryA((appPath.substr(0, pos) + "\\coremods").c_str(), NULL); //create the directory if it doesn't exist
			std::string path = appPath.substr(0, pos) + "\\coremods";

			loadCoremodsInternal(path);
		}

		void loadCoremodsInternal(std::string path) {
			std::string pathExact = path + "\\";

			for (const auto & entry : std::experimental::filesystem::directory_iterator(path)) {
				if (!entry.path().has_extension()) {
					loadCoremodsInternal(entry.path().string());
					continue;
				}

				if (entry.path().extension().string() == ".dll") {
					std::string file = pathExact + entry.path().filename().string();
					std::wstring stemp = std::wstring(file.begin(), file.end());

					Utility::warning("Warning: loading coremod ", entry.path().filename(), ". Please remove coremods before submitting bug reports!");

					LoadLibraryW(stemp.c_str());
				}
			}
		}
	};
};