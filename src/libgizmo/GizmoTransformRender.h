#pragma once

typedef tvector4 tplane;

struct IGizmoTransformRender
{
    virtual void DrawCircle(const tvector3 &orig, float r, float g, float b, const tvector3 &vtx, const tvector3 &vty) = 0;
    virtual void DrawCircleHalf(const tvector3 &orig, float r, float g, float b, const tvector3 &vtx, const tvector3 &vty, tplane &camPlan) = 0; 
    virtual void DrawAxis(const tvector3 &orig, const tvector3 &axis, const tvector3 &vtx, const tvector3 &vty, float fct, float fct2, const tvector4 &col) = 0;
    virtual void DrawCamem(const tvector3& orig, const tvector3& vtx, const tvector3& vty, float ng) = 0;
    virtual void DrawQuad(const tvector3& orig, float size, bool bSelected, const tvector3& axisU, const tvector3 &axisV) = 0;
    virtual void DrawTri(const tvector3& orig, float size, bool bSelected, const tvector3& axisU, const tvector3& axisV) = 0;
};

