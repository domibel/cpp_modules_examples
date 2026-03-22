#include <iostream>
import glm;

int main() {
    glm::vec3 v1(1.0f, 2.0f, 3.0f);
    glm::vec3 v2(4.0f, 5.0f, 6.0f);

    std::cout << "Dot product: " << glm::dot(v1, v2) << "\n";
}
