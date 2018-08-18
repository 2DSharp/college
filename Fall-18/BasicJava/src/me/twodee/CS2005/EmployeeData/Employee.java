package me.twodee.CS2005.EmployeeData;

public class Employee {

    private int ID;
    private String name;
    private double basicPay;
    private double DA;
    private double TA;
    private double HRA;
    private double allowance = 0;

    public Employee(int ID, String name, double basicPay, double DA, double TA, double HRA)
    {
        this.ID = ID;
        this.name = name;
        this.DA = DA;
        this.basicPay = basicPay;
        this.TA = TA;
        this.HRA = HRA;
    }

    public Employee(int ID, String name, double basicPay, double DA, double TA, double HRA, double allowance)
    {
        this.ID = ID;
        this.name = name;
        this.DA = DA;
        this.basicPay = basicPay;
        this.TA = TA;
        this.HRA = HRA;
        this.allowance = allowance;
    }

    public int getID() {
        return ID;
    }

    public String getName() {
        return name;
    }

    public double getBasicPay() {
        return basicPay;
    }

    public double getDA() {
        return DA;
    }

    public double getTA() {
        return TA;
    }

    public double getHRA() {
        return HRA;
    }

    public double getGrossPay()
    {
        return basicPay + DA + HRA + TA + allowance;
    }
}
