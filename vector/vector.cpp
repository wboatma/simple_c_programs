#include <iostream>
#include <vector>

int main() {
    std::vector<int> list;
    std::vector<int>::iterator it;

    it = list.begin();
    list.insert(it, 15);

    std::cout << "Vector size: " << list.size() << std::endl;

    return 0;
}
