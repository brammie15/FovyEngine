#version 330 core
layout (location = 0) in vec3 aPos;   // the position variable has attribute position 0
//layout (location = 1) in vec3 aColor; // the color variable has attribute position 1
layout (location = 1) in vec2 aTexCoord;

out vec3 ourColor; // output a color to the fragment shader

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

uniform vec3 aColor;

void main()
{
    gl_Position = projection * view * model * vec4(aPos, 1.0);

    ourColor = aColor;
}