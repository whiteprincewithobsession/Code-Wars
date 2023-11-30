bool is_cube(int volume, int side)
{
    return side * side * side != volume || side <= 0 ? false : true;
}