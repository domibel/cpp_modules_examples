import std;
import glm;

int main() {
    std::println("Testing import glm!");
    
    glm::vec3 v1(1.0f, 2.0f, 3.0f);
    glm::vec3 v2(4.0f, 5.0f, 6.0f);
    
    float dot = glm::dot(v1, v2);
    std::println("Dot product: {}", dot);
    
    return 0;
}
