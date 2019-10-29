package me.twodee.CS2005.InterestCalculationOverriding;

public class ICICI extends Bank
{
    public ICICI()
    {
        interestRate = 9.5;
    }
    @Override
    public double getInterestRate()
    {
        return interestRate;
    }
}
