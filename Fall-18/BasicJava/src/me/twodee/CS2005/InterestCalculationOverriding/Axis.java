package me.twodee.CS2005.InterestCalculationOverriding;

public class Axis extends Bank
{
    public Axis()
    {
        interestRate = 9.75;
    }
    @Override
    public double getInterestRate()
    {
        return interestRate;
    }
}
