package me.twodee.CS2005.InterestCalculationOverriding;

public class SBI extends Bank
{
    public SBI()
    {
        interestRate = 9.25;
    }
    @Override
    public double getInterestRate()
    {
        return (float) interestRate;
    }
}
