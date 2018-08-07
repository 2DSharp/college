package me.twodee.SimpleCalculator;

public class Addition implements ArithmeticOperator
{
    private double a;
    private double b;

    public Addition(double a, double b)
    {
        this.a = a;
        this.b = b;
    }

    public double getResult()
    {
        return a + b;
    }
}
