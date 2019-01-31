#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

int main() {
  
  std::vector<int> myVec(10);
  std::iota(std::begin(myVec), std::end(myVec), 1);

  for(int i = 0; i < myVec.size(); i++){
    if (myVec[i] % 2 == 0)
    {
      std::cout << myVec[i] << "\n";
    }
  }

  return 0;

}
