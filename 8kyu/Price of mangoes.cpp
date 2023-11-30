int mango(int quantity, int price)
{
    quantity -= quantity / 3;
    return price * quantity;
}