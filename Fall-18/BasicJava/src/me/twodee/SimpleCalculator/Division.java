package me.twodee.SimpleCalculator;

public class Division implements ArithmeticOperator
{
    private double a;
    private double b;

    public Division(double a, double b)
    {
        this.a = a;
        this.b = b;
    }

    @Override
    public double getResult() {
        return a / b;
    }
}
