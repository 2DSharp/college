package me.twodee.CS2005.BankingSystemBasic;

public class Account {

    private int accountNumber;
    private double balance;
    private String name;
    public static String bankName = "Indian bank";

    public Account(String name, int accountNumber, double balance)
    {
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.name = name;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public String getName() {
        return name;
    }
}
