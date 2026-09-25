#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    fs::space_info info = fs::space("C:\\");

    std::cout << "Total:     " << info.capacity / (1024*1024) << " MB\n";
    std::cout << "Freely:  " << info.free     / (1024*1024) << " MB\n";
    std::cout << "Available:  " << info.available / (1024*1024) << " MB\n";
}