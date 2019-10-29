package me.twodee.CS2005.SimpleCalculator;

public class Subtraction implements ArithmeticOperator
{
    private double a;
    private double b;

    public Subtraction(double a, double b)
    {
        this.a = a;
        this.b = b;
    }

    public double getResult()
    {
        return a - b;
    }
}
