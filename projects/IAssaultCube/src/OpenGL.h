#pragma once

#include <gl/GL.h>
#include <gl/GLU.h>

struct RGB
{
	GLfloat red = 0.f, green = 0.f, blue = 0.f, alpha = 1.f;
};

namespace RenderFunctions
{
	struct Color32
	{
		Color32(float pR, float pG, float pB, float pA)
		{
			this->r = pR;
			this->g = pG;
			this->b = pB;
			this->a = pA;
		}

		float r;
		float g;
		float b;
		float a;
	};
}


namespace OpenGL
{
	void DrawBox(float x, float y, RGB color, float width, float height);
	void DrawBoxEx(float x, float y, float width, float height, bool enemy = true);
	void DrawSnaplines(float x, float y, RGB color, float SWidth, float SHeight);
	void DrawRect(int x, int y, int x2, int y2, RenderFunctions::Color32 color, bool bFilled);
	void DrawHealthBar(GLfloat x, GLfloat y, GLfloat w, GLfloat h, GLfloat health, RenderFunctions::Color32 color);
	void DrawString(int x, int y, int r, int g, int b, char* pText, ...);
	bool WorldToScreen(Vec3 vPos, Vec3* pvOut);
	bool OutdatedWorldToScreen(float* matrix, Vector3 worldPosition, Vector3& screenPosition);
	float GetDistance(Vector3 myCoords, Vector3 enemyCoords);
};

