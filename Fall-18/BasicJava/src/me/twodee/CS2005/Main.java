package me.twodee.CS2005;

import me.twodee.CS2005.SalaryCalculation.SalaryApplication;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new SalaryApplication();
        app.run(scanner);



    }
}
