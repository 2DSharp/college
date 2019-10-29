package me.twodee.CS2005.Quiz1;


import java.time.LocalDate;
import java.util.Date;

public class Account
{
    private int id;
    private double balance = 0;
    private double annualInterestRate = 0;

    Date dateCreated;

    public Account()
    {
        dateCreated = new Date();
    }

    public Account(int id, int balance)
    {
        this.id = id;
        this.balance = balance;
        dateCreated = new Date();
    }

    public int getId()
    {
        return id;
    }

    public void setId(int id)
    {
        this.id = id;
    }

    public double getBalance()
    {
        return balance;
    }

    public void setBalance(double balance)
    {
        this.balance = balance;
    }

    public double getAnnualInterestRate()
    {
        return annualInterestRate;
    }

    public void setAnnualInterestRate(double annualInterestRate)
    {
        this.annualInterestRate = annualInterestRate;
    }

    public Date getDateCreated()
    {
        return dateCreated;
    }

    public double getMonthlyInterestRate()
    {
        return annualInterestRate / 12;
    }

    public double getMonthlyInterest()
    {
        return balance * annualInterestRate / 12;
    }

    public boolean withdraw(double amount) throws Exception
    {
        if (amount > balance) {
            throw new Exception("Balance less than required withdraw amount");
      }

        balance -= amount;
        return true;
    }

    public void deposit(double amount)
    {
        balance += amount;
    }

}
