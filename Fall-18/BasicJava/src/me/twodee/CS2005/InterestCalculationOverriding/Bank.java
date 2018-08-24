package me.twodee.CS2005.InterestCalculationOverriding;

public abstract class Bank
{
    protected double interestRate;

    public abstract double getInterestRate();

    public double getInterestAmount(double principal, int tenure)
    {
        return (principal * interestRate * tenure)/100;
    }
}
