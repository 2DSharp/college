package me.twodee.CS2005.ArithmeticOperator;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class ArithmeticRunner implements CommandLineApp
{
    @Override
    public void run(Scanner scanner)
    {
        Addition addition = new Addition(3, 4);
        System.out.println("Adding the two values: " + addition.operate());
    }
}
