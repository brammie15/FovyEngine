#ifndef SUPEREPIKGAME_VERTEX_H
#define SUPEREPIKGAME_VERTEX_H

#include <glm/glm.hpp>

struct Vertex {
    glm::vec3 m_position{};
    glm::vec2 m_textureCoord{};
    glm::vec3 m_normal{};
    // TODO : add tangent
    // TODO : add bitTangent

    explicit Vertex(glm::vec3 position = glm::vec3(0, 0, 0), glm::vec2 textureCoord = glm::vec2(0, 0), glm::vec3 normal = glm::vec3(0, 0, 0)) {
        this->m_position = position;
        this->m_textureCoord = textureCoord;
        this->m_normal = normal;
    }
};

#endif //SUPEREPIKGAME_VERTEX_H
