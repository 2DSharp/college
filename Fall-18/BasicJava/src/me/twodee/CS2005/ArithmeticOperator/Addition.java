package me.twodee.CS2005.ArithmeticOperator;

public class Addition extends Operator
{
    private int a;
    private int b;

    public Addition(int a, int b)
    {
        super(a, b);
    }

    public int operate()
    {
        return getA() + getB();
    }
}
