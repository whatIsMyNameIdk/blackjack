#include <iostream>
#include <fstream>
#include <string>

void clearConsole()
{
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}

int main()
{
  clearConsole();

  // Read title
  std::ifstream fd("title");
  std::string titleLine;
  while (!fd.eof()) {
    getline(fd, titleLine);
    std::cout << titleLine << std::endl;
  }
  fd.close();

  
  return 0; 
}
