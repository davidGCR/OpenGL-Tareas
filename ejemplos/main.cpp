#include <GL/glew.h>
#include <GLFW/glfw3.h>

//g++ -o hellot main.cpp -lglut -lglfw -lGL -lGLU -lGLEW

#include <stdio.h>

int main(){
    if(!glfwInit()){
        fprintf(stderr,"ERROR: no se puede iniciar GLFW3\n");
        return 1;
    }
    GLFWwindow* window = glfwCreateWindow(640,480,"hola triangulo",NULL,NULL);
    if(!window){
        fprintf(stderr,"ERROR: No se puede abrir window\n");
        glfwTerminate();
        return 1;
    }
    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    glewInit();

    //version info
    const GLubyte* renderer = glGetString(GL_RENDERER);
    const GLubyte* version = glGetString(GL_VERSION);
    printf("Renderer: %s\n",renderer);
    printf("OpenGL version soportada %s\n",version);
    glfwTerminate();
    return 0;
    
}