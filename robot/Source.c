#include <glut.h>

#define TORSO_HEIGHT 6//גוף
#define UPPER_ARM_HEIGHT 2.5//חלק יד עליון
#define LOWER_ARM_HEIGHT 1.5//חלק יד תחתון 
#define UPPER_LEG_RADIUS  0.5 //חלק עליון רגל
#define LOWER_LEG_RADIUS  0.8 //חלק תחתון רגל
#define LOWER_LEG_HEIGHT 2.0
#define UPPER_LEG_HEIGHT 5.0
#define UPPER_LEG_RADIUS  0.5
#define TORSO_RADIUS 2.0
#define UPPER_ARM_RADIUS  0.5
#define LOWER_ARM_RADIUS  0.55
#define HEAD_HEIGHT 3.0
#define HEAD_RADIUS 1.0


static GLfloat theta[11] = { 0.0,0.0,0.0,180.0,0.0,180.0,0.0,
180.0,0.0,180.0,0.0 }; /* initial joint angles */
static GLint angle = 2;

GLUquadricObj *t, *h, *lua, *lla, *rua, *rla, *lll, *rll, *rul, *lul;
void sphere(void)
{
	
	GLfloat mat_ambient[] = { 0.0, 1.0,0.0,0.0 };
	GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glTranslatef(0.0, 0.5*HEAD_HEIGHT, 0.0);
	//glutSolidCube(3);
	//glScalef(HEAD_RADIUS, HEAD_HEIGHT, HEAD_RADIUS);
	glRotatef(30, 1, 1, 0);
	glutSolidSphere(2, 26, 26);
	//head();

	glPopMatrix();
}

void eye1(void)
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glTranslatef(1, 7,1.5);
	glRotatef(30, 1, 1, 0);
	glutSolidSphere(0.5, 26, 26);

	glPopMatrix();
}
void eye2(void)
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glTranslatef(-1,7,1.5);
	glRotatef(30, 2, 2, 0);
	glutSolidSphere(0.5, 26, 26);

	glPopMatrix();
}
void bott(void)
{
	GLfloat mat_ambient[] = { 1.0, 2.0, 0.0,0.0 };
	GLfloat mat_diffuse[] = { 1.0, 1.5, 0.0,0.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 0.0,0.7 };
	GLfloat mat_shininess[] = {	50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glTranslatef(1, 5, 1.5);
	glutSolidCube(0.5);
	//glRotatef(0, 6, 6, 6);
	//glScalef(100,1,1);
	//glutSolidSphere(0.2,26, 26);

	glPopMatrix();
}
void bott2(void)
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 1.0,0.7 };
	GLfloat mat_diffuse[] = { 1.0, 0.0, 1.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 100.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glTranslatef(0.3, 5,2.0);
	glutSolidCube(0.5);
	//glRotatef(0, 6, 6, 6);
	//glScalef(100,1,1);
	//glutSolidSphere(0.2,26, 26);

	glPopMatrix();
}
void torso()
{
	GLfloat mat_ambient[] = { 1.0, 0.5, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 1.0, 0.5, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(t, TORSO_RADIUS, TORSO_RADIUS, TORSO_HEIGHT, 10, 10);
	//sphere1();
	glPopMatrix();
}

void head()
{
	glPushMatrix();
	glTranslatef(0.0, 0.5*HEAD_HEIGHT, 0.0);
	glScalef(HEAD_RADIUS, HEAD_HEIGHT, HEAD_RADIUS);
	gluSphere(h, 1.0, 10, 10);
	sphere();
	glPopMatrix();
}

void left_upper_arm()
{
	GLfloat mat_ambient[] = { 0.0, 1.0,0.0,0.0 };
	GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(lua, UPPER_ARM_RADIUS, UPPER_ARM_RADIUS, UPPER_ARM_HEIGHT, 200, 10);
	glPopMatrix();
}

void left_lower_arm()
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(lla, LOWER_ARM_RADIUS, LOWER_ARM_RADIUS, LOWER_ARM_HEIGHT, 10, 10);
	glPopMatrix();
}

void right_upper_arm()
{
	GLfloat mat_ambient[] = { 0.0, 1.0,0.0,0.0 };
	GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(rua, UPPER_ARM_RADIUS, UPPER_ARM_RADIUS, UPPER_ARM_HEIGHT, 10, 10);
	glPopMatrix();
}

void right_lower_arm()
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(rla, LOWER_ARM_RADIUS, LOWER_ARM_RADIUS, LOWER_ARM_HEIGHT, 10, 10);
	glPopMatrix();
}

void left_upper_leg()
{
	GLfloat mat_ambient[] = { 1.0, 0.0,3.0,0.7 };
	GLfloat mat_diffuse[] = { 1.0, 0.0, 3.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(lul, UPPER_LEG_RADIUS, UPPER_LEG_RADIUS, UPPER_LEG_HEIGHT, 10, 10);
	glPopMatrix();
}

void left_lower_leg()
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(lll, LOWER_LEG_RADIUS, LOWER_LEG_RADIUS, LOWER_LEG_HEIGHT, 10, 10);
	glPopMatrix();
}

void right_upper_leg()
{
	GLfloat mat_ambient[] = { 1.0, 0.0,3.0,0.7 };
	GLfloat mat_diffuse[] = { 1.0, 0.0, 3.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 0.0, 3.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(rul, UPPER_LEG_RADIUS, UPPER_LEG_RADIUS, UPPER_LEG_HEIGHT, 10, 10);
	glPopMatrix();
}

void right_lower_leg()
{
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0,0.7 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0,0.7 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 0.7 };
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glPushMatrix();
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	gluCylinder(rll, LOWER_LEG_RADIUS, LOWER_LEG_RADIUS, LOWER_LEG_HEIGHT, 10, 10);
	glPopMatrix();
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glColor3f(1, 0.0, 0.0);

	glRotatef(theta[0], 0.0, 1.0, 0.0);
	torso();
	//sphere1();
	glPushMatrix();

	glTranslatef(0.0, TORSO_HEIGHT + 0.5*HEAD_HEIGHT, 0.0);
	glRotatef(theta[1], 1.0, 0.0, 0.0);
	glRotatef(theta[2], 10.0, 1.0,10.0);
	glTranslatef(0.0, -0.5*HEAD_HEIGHT, 0.0);
	//head();
	sphere();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-(TORSO_RADIUS + UPPER_ARM_RADIUS), 0.9*TORSO_HEIGHT, 0.0);
	glRotatef(theta[3], 1.0, 0.0, 0.0);
	left_upper_arm();

	glTranslatef(0.0, UPPER_ARM_HEIGHT, 0.0);
	glRotatef(theta[4], 1.0, 0.0, 0.0);
	left_lower_arm();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(TORSO_RADIUS + UPPER_ARM_RADIUS, 0.9*TORSO_HEIGHT, 0.0);
	glRotatef(theta[5], 1.0, 0.0, 0.0);
	right_upper_arm();

	glTranslatef(0.0, UPPER_ARM_HEIGHT, 0.0);
	glRotatef(theta[6], 1.0, 0.0, 0.0);
	right_lower_arm();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-(TORSO_RADIUS + UPPER_LEG_RADIUS), 0.1*UPPER_LEG_HEIGHT, 0.0);
	glRotatef(theta[7], 1.0, 0.0, 0.0);
	left_upper_leg();

	glTranslatef(0.0, UPPER_LEG_HEIGHT, 0.0);
	glRotatef(theta[8], 1.0, 0.0, 0.0);
	left_lower_leg();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(TORSO_RADIUS + UPPER_LEG_RADIUS, 0.1*UPPER_LEG_HEIGHT, 0.0);
	glRotatef(theta[9], 1.0, 0.0, 0.0);
	right_upper_leg();

	glTranslatef(0.0, UPPER_LEG_HEIGHT, 0.0);
	glRotatef(theta[10], 1.0, 0.0, 0.0);
	right_lower_leg();

	glPopMatrix();
	eye1();
	eye2();
	bott();
	bott2();
	glFlush();
	glutSwapBuffers();
}



void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		theta[angle] += 5.0;
		if (theta[angle] > 360.0) theta[angle] -= 360.0;
	}
	if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		theta[angle] -= 5.0;
		if (theta[angle] < 360.0) theta[angle] += 360.0;
	}
	display();
}

void menu(int id)
{
	if (id <11) angle = id;

}

void myReshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);

}

void myinit()
{
	/*
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_diffuse[] = { 1.0, 2.0, 0.0, 1.0 };
	GLfloat mat_ambient[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess = { 100.0 };
	GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat light_diffuse[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_position[] = { 10.0, 10.0, 10.0, 0.0 };

	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);


	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);*/

	float light_position[] = { -4, 4, 4, 0.0 };
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);

	/* allocate quadrics with filled drawing style */

	h = gluNewQuadric();
	gluQuadricDrawStyle(h, GLU_FILL);
	t = gluNewQuadric();
	gluQuadricDrawStyle(t, GLU_FILL);
	lua = gluNewQuadric();
	gluQuadricDrawStyle(lua, GLU_FILL);
	lla = gluNewQuadric();
	gluQuadricDrawStyle(lla, GLU_FILL);
	rua = gluNewQuadric();
	gluQuadricDrawStyle(rua, GLU_FILL);
	rla = gluNewQuadric();
	gluQuadricDrawStyle(rla, GLU_FILL);
	lul = gluNewQuadric();
	gluQuadricDrawStyle(lul, GLU_FILL);
	lll = gluNewQuadric();
	gluQuadricDrawStyle(lll, GLU_FILL);
	rul = gluNewQuadric();
	gluQuadricDrawStyle(rul, GLU_FILL);
	rll = gluNewQuadric();
	gluQuadricDrawStyle(rll, GLU_FILL);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("robot");
	myinit();
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glClearColor(0.0, 2.0, 4.0, 0.7);

	glutCreateMenu(menu);
	glutAddMenuEntry("torso", 0);
	glutAddMenuEntry("head1", 1);
	glutAddMenuEntry("head2", 2);
	glutAddMenuEntry("left_upper_arm", 3);
	glutAddMenuEntry("left_lower_arm", 4);
	glutAddMenuEntry("right_upper_arm", 5);
	glutAddMenuEntry("right_lower_arm", 6);
	
	glutAddMenuEntry("left_upper_leg", 7);
	glutAddMenuEntry("left_lower_leg", 8);
	glutAddMenuEntry("right_upper_leg", 9);
	glutAddMenuEntry("right_lower_leg", 10);

	glutAttachMenu(GLUT_MIDDLE_BUTTON);


	glutMainLoop();
}