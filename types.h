typedef struct Dimension{
    unsigned long width;
    unsigned long height;

}Dimension;
typedef struct Point{
    unsigned long x;
    unsigned long y;
}Point;
typedef struct Vector2{
    long x;
    long y;
}Vector2;
const unsigned long COLORS = 16;
typedef enum Color{
    White,
    Orange,
    Magenta,
    LightBlue,
    Yellow,
    Lime,
    Pink,
    Grey,
    LightGrey,
    Cyan,
    Purple,
    Blue,
    Brown,
    Green,
    Red,
    Black
};
typedef struct Rgb{
    unsigned char R;
    unsigned char G;
    unsigned char B;
}Rgb;