/**
C++ Program list all files in the Directory by codebind.com
*/
 
#include <dirent.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <memory>
 
namespace {
std::vector<std::string> GetDirectoryFiles(const std::string& dir) {
  std::vector<std::string> files;
  std::shared_ptr<DIR> directory_ptr(opendir(dir.c_str()), [](DIR* dir){ dir && closedir(dir); });
  struct dirent *dirent_ptr;
  if (!directory_ptr) {
    std::cout << "Error opening : " << std::strerror(errno) << dir << std::endl;
    return files;
  }
 
  while ((dirent_ptr = readdir(directory_ptr.get())) != nullptr) {
    files.push_back(std::string(dirent_ptr->d_name));
  }
  return files;
}
}  // namespace
 
int main() {
  const auto& directory_path = std::string(".");
  const auto& files = GetDirectoryFiles(directory_path);
  for (const auto& file : files) {
    std::cout << file << std::endl;
  }
  return 0;
}