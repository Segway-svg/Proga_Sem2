#ifndef ANOTHER_PROGA_SEM2_LAB4_ELLIPSE_H
#define ANOTHER_PROGA_SEM2_LAB4_ELLIPSE_H
#pragma once

#include "base.h"

class ellipse : public IFigure {
public:
    ellipse();

    ~ellipse();

    double square() override;

    double perimeter() override;

    double mass() const override;

    CVector2D position() const override;

    bool operator==(const IPhysObject &obj) const override;

    bool operator<(const IPhysObject &obj) const override;

    void draw() override;

    void initFromDialogue() override;

    const char *className() override;

    unsigned int size() override;

private:
    CVector2D center;
    CVector2D a;
    CVector2D b;
    double radius = 0;
    double weight = 0;
    const char *name = "ellipse";
};

#endif //ANOTHER_PROGA_SEM2_LAB4_ELLIPSE_H
