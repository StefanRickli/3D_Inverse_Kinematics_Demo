//=============================================================================
//
// Documentation here
//
//=============================================================================
#ifndef SPHERE_H
#define SPHERE_H
//=============================================================================

#include "gl.h"
#include "mesh/mesh.h"

//=============================================================================

/// class that creates a sphere with a desired tessellation degree and renders it
class Sphere_Mesh: public Mesh
{
public:

    /// default constructor
    /// \param resolution the degree of the tessellation of the sphere
    Sphere_Mesh(unsigned int resolution=10);

    /// destructor
    ~Sphere_Mesh();

    /// render mesh of the sphere
    void draw(GLenum mode=GL_TRIANGLES);


private:

    /// generate sphere vertices/triangles and OpenGL buffers
    void initialize();


private:

    /// tessellation resolution
    unsigned int resolution_;
    /// indices of the triangle vertices
    unsigned int n_indices_ = 0;

    // vertex array object
    GLuint vao_ = 0;
    /// vertex buffer object
    GLuint vbo_ = 0;
    /// normals buffer object
    GLuint nbo_ = 0;
    /// tangents buffer object
    GLuint tan_bo_ = 0;
    /// bitangents buffer object
    GLuint bitan_bo_ = 0;
    /// texture coordinates buffer object
    GLuint tbo_ = 0;
    /// index buffer object
    GLuint ibo_ = 0;
};

//=============================================================================
#endif
//=============================================================================
