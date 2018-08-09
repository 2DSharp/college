package me.twodee.ArithmeticOperator;

public class Operator
{
    private int a;
    private int b;

    public Operator(int a, int b)
    {
        this.a = a;
        this.b = b;
    }

    protected int getA()
    {
        return a;
    }

    protected  int getB()
    {
        return b;
    }

}
