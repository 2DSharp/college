package me.twodee.CS2005.SimpleCalculator;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class Calculator implements CommandLineApp
{
    @Override
    public void run(Scanner scanner) {

        ArithmeticOperator add = new Addition(3, 10);
        System.out.println(add.getResult());
    }
}
