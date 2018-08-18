package me.twodee.CS2005.SimpleCalculator;

public class Multiplication implements ArithmeticOperator
{
    private double a;
    private double b;

    public Multiplication(double a, double b)
    {
        this.a = a;
        this.b = b;
    }

    public double getResult()
    {
        return a * b;
    }
}
