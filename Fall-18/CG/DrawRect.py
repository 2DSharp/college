from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

window = 0
width, height = 500, 500

def draw():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glLoadIdentity()
    glColor3f(25, 123, 180)

    glutSwapBuffers()

def drawRect(x, y, width, height):
    glBegin(GL_QUADS)
    glVertext2f(x, y)
    glVertext2f(x + width, y)
    glVertex2f(x + width, y + height)
    glVertext2f(x, y + height)
    glEnd()
    
glutInit()
glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH)
glutInitWindowSize(width, height)
glutInitWindowPosition(0, 0)
window = glutCreateWindow("VIT-AP")
glutDisplayFunc(draw)
glutIdleFunc(draw)
glutMainLoop()
                    

drawRect()
