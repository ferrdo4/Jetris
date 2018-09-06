#pragma once

enum JetrisShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };

class JetrisPiece
{
public:
    JetrisPiece() { setShape(NoShape); }

    void setRandomShape();
    void setShape(JetrisShape shape);

    JetrisShape shape() const { return pieceShape; }
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

    JetrisShape pieceShape;
    int coords[4][2];
};
