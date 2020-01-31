#version 330 core
layout(location = 0) in vec3 aPos;   // the position variable has attribute position 0
layout(location = 1) in vec3 aColor;   // the position variable has attribute position 0
layout(location = 2) in vec2 aTexCoord; // the color variable has attribute position 1
out vec2 TexCoord; // output a color to the fragment shader
out vec3 ourColor;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
	gl_Position = projection * view * model *  vec4(aPos, 1);
	ourColor = aColor;
	TexCoord = aTexCoord; // set ourColor to the input color we got from the vertex data
}