#include <iostream>
#include <cpp_structure/tools/tools.h>
#include <cpp_structure/tools/named_tools.h>

int main() {
  cpp_structure::tools::PrintHello();
  std::cout << std::endl;

  cpp_structure::named_tools::NamedTools tools("Nikita");
  tools.printHello();
  return 0;
}
