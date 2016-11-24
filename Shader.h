#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL/glew.h> // 包含glew来获取所有的必须OpenGL头文件

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader {
	public:
		// 程序ID
		GLuint Program;
		// 构造器读取并构建着色器
		Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
		// 使用程序
		void Use();
		/*abandoned
		void Shader::AssignUniform(const GLchar *name, GLchar *valtype, glm::mat4 *trans);

		void AssignUniform(const GLchar *name, GLchar *valtype, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);

		void AssignUniform(const GLchar *name, GLchar *valtype, GLfloat v0, GLfloat v1, GLfloat v2);
		*/
};
#endif
