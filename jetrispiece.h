#pragma once

enum Termino
{
    NoShape,
    ZShape,
    SShape,
    IShape,
    TShape,
    OShape,
    LShape,
    JShape
};

class JetrisPiece
{
public:
    JetrisPiece() { setShape(NoShape); }

    void setRandomShape();
    void setShape(Termino shape);

    Termino shape() const { return pieceShape; }
    int x(int index) const { return coords[index][0]; }
    int y(int index) const { return coords[index][1]; }
    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    JetrisPiece rotatedLeft() const;
    JetrisPiece rotatedRight() const;

private:
    void setX(int index, int x) { coords[index][0] = x; }
    void setY(int index, int y) { coords[index][1] = y; }

    Termino pieceShape;
    int coords[4][2];
};
